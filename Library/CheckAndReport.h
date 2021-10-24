#ifndef _CHECKANDREPORT_
#define _CHECKANHREPORT_
#include "orders.h"
#include "goods.h"
#include "GoodManagement.h"


void CHECKANDREPORT(vector<goods> hanghoa) {
	Input(hanghoa);
	orders x;
	bool test = false;
	int count = 1, i;

	ofstream os;
	os.open("DonHang.txt", fstream::app);
	int n = 0;
	for (i = 0; i < count;) {
		TableOrder(0, 0, 3 + 18);
		vietchuoi(86, 22, "Nhan [ESC] de tro ve ", 12); 
		vietchuoi(86, 23, "Nhan [ENTER] de tiep tuc dat hang ", 12);
		x.number = count;
		int k = keyboard();
		if (k == 4) {
			system("cls");
			return;
		}
		else {
			vietchuoi(86, 22, "                     ", 12); //An [esc]
			vietchuoi(50, 22, "                      ", 4); //An enter
			textcolor(3);
		}
		gotoxy(2, 3+n); cout << count;
		gotoxy(6, 3+n); cin >> x.seri;
		gotoxy(17, 3+n); cin >> x.amount;				cin.ignore(); x.calculateTotalMoney(hanghoa);
		gotoxy(106, 3+n); cout << x.total_money;
		gotoxy(28, 3+n); getline(cin, x.customerName);	cin.clear();
		gotoxy(47, 3+n); getline(cin, x.address);		cin.clear();
		gotoxy(73, 3+n); cin >> x.phoneNumber;
		gotoxy(88, 3+n); cin >> x.orderDate[0]; gotoxy(90, 3+n); cout << "/";
		gotoxy(91, 3+n); cin >> x.orderDate[1]; gotoxy(93, 3+n); cout << "/";
		gotoxy(94, 3+n); cin >> x.orderDate[2];
		// hien thi chen
		
		for (int i = 0; i < hanghoa.size(); i++)
		{
			if (hanghoa[i].seri == x.seri)
			{
				test = true;
				//  hang hoa trong kho phai lon hon hoac bang so luong hang hoa nhap
				if (hanghoa[i].amount >= x.amount)
				{

					hanghoa[i].amount -= x.amount;
					os << x << endl;
					count++;
					gotoxy(6, 3 + n ); cout << x.seri;
					gotoxy(17, 3 + n );cout << x.amount;
					gotoxy(106, 3 + n );cout << x.total_money;
					gotoxy(28, 3 + n ); cout << x.customerName;
					gotoxy(47, 3 + n ); cout << x.address;
					gotoxy(73, 3 + n ); cout << x.phoneNumber;
					gotoxy(88, 3 + n ); cout << x.orderDate[0]; gotoxy(90, 3+ n ); cout << "/";
					gotoxy(91, 3 + n ); cout << x.orderDate[1]; gotoxy(93, 3+ n ); cout << "/";
					gotoxy(94, 3 + n ); cout << x.orderDate[2];
					vietchuoi(50, 22, "Da Dat Hang Thanh Cong", 2);
					n++;
					break;
				}
				else {
					test = true;
					vietchuoi(0,22, "Hien tai khong du so luong hang hoa. Quy khach vui long chon hang hoa khac. Xin cam on", 6);
					Sleep(3000);
					system("cls");
					break;
				}
			}
		}
		i--;
		if (!test)
		{
			vietchuoi(0, 22, "Ma hang khong ton tai. Vui long dien lai. Xin cam on", 6);
			Sleep(2000);
			system("cls");
		}
		test = false;
	}
	os.close();

}
#endif
