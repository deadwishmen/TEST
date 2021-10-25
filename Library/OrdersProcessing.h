#ifndef __ORDERSPROCESSING__
#define __ORDERSPROCESSING__

#include"orders.h"
#include"GoodManagement.h"
using namespace std;

void getData(vector< vector<orders> >& _dh) {
	_dh.clear();
	ifstream input;
	input.open("DonHang.txt");

	vector<orders> add;
	bool check = false;

	while (!input.eof()) { // chay tu dau toi cuoi file
		orders o;
		input >> o;
		if (o.seri == "") goto end; // Kiem tra xem file co rong~ khong
		if (o.number == 1 && check) {
			_dh.push_back(add);
			add.clear();
		}
		check = true;
		add.push_back(o);
	}


	end:;
	if(add.size() != 0)_dh.push_back(add);
	input.close();
}

void updateFileOrders(vector< vector <orders> > dh) {
	ofstream file;
	file.open("DonHang.txt", ios::trunc);
	// trunc: Xoa tat ca du lieu cua file 

	// Lay du lieu
	if (file.is_open()) {
		for (int i = 0; i < dh.size(); i++) {
			for (int j = 0; j < dh[i].size(); j++) {
				file << dh[i][j];
			}
			if (i != dh.size() - 1) {
				file << endl;
			}
		}
	}
	else {
		cout << "updateOrders() : KHONG the mo duoc FILE HangHoa.txt !" << endl;
	}
	file.close();
}

void process(vector< vector <orders> >& dh, vector<goods>& hh) {
	for (int i = 0; i < dh[0].size(); i++) {
		for (int j = 0; j < hh.size(); j++) {
			if (dh[0][i].seri == hh[j].seri) {
				hh[j].amount = hh[j].amount - dh[0][i].amount;
				goto out;
			}
		}
		out:;
	}
	dh.erase(dh.begin());
}

void ORDERS_PROCESSING(vector< vector <orders> >& dh, vector<goods>& hh) {
	int count = 1;
	bool check = false;
	getData(dh);
	cout << "Co " << dh.size() << " Don Dat Hang\n";
	while (dh.size() != 0) {
		getData(dh);
		check = true;
		process(dh, hh);
		updateGoods(hh);
		updateFileOrders(dh);
		cout << "Xu Ly Xong Don Hang Thu " << count << endl;
		count++;
	}
	if(check) cout << "Don Hang Xu Ly Thanh Cong !";
	else cout << "Hien tai khong co Don Hang nao !";
	Sleep(1000);
	system("cls");
}

#endif
