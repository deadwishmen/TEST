#include"GoodManagement.h"
#include"OrdersProcessing.h"
#include"Search.h"
#include"Display.h"
#include "CheckAndReport.h"

using namespace std;

class Goods {
protected:
	vector<goods> hh;
public:
	vector<goods> &getHH() {
		return hh;
	}
	void goodManagement() {
		GOODS_MANAGEMENT(hh);//
	}
	void Display() {
		
	}
	void Search() {

	}
	bool input() {
		return Input(hh);
	}
};

class Orders {
protected:
	vector< vector <orders> > dh;
public:
	void orderProcessing(Goods &g) {
		ORDERS_PROCESSING(dh, g.getHH());
	}
	void checkAndReport(Goods g) {
		CHECKANDREPORT(g.getHH());
	}
};

void Menu(Goods g);

int main() {
	Goods a;
	if (a.input()) {
		Menu(a);
	}
	return 0;
}

void Menu(Goods g) {
	khung(30, 1, 67, 2, 14);
	khung(30, 3, 67, 17, 14);
	vietchuoi(30 + 20, 1 + 1, "CHUONG TRINH QUAN LY BAN HANG", 228);
	int kt = 1;
	int x = 0, y = 0;
	khung(x + 40, y + 5, 40, 2, 14);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANH HOA", 15);
	khung(x + 40, y + 5 + 3, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 6);
	khung(x + 40, y + 5 + 6, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 6);
	khung(x + 40, y + 5 + 9, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 6);
	khung(x + 40, y + 5 + 12, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 6);
	for (;;) {
		gotoxy(0, 0);
		int k = keyboard();
		if (k == 2) {
			if (kt == 1) {
				kt = 2;
				khung(x + 40, y + 5, 40, 2, 0);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANH HOA", 6);
				khung(x + 40, y + 5 + 3, 40, 2, 14);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 15);
				khung(x + 40, y + 5 + 6, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 6);
				khung(x + 40, y + 5 + 9, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 6);
				khung(x + 40, y + 5 + 12, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 6);
			}
			else if (kt == 2) {
				kt = 3;
				khung(x + 40, y + 5, 40, 2, 0);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANH HOA", 6);
				khung(x + 40, y + 5 + 3, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 6, 40, 2, 14);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 15);
				khung(x + 40, y + 5 + 9, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 6);
				khung(x + 40, y + 5 + 12, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 6);
			}
			else if (kt == 3) {
				kt = 4;
				khung(x + 40, y + 5, 40, 2, 0);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANH HOA", 6);
				khung(x + 40, y + 5 + 3, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 6, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 6);
				khung(x + 40, y + 5 + 9, 40, 2, 14);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 15);
				khung(x + 40, y + 5 + 12, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 6);
			}
			else if (kt == 4) {
				kt = 5;
				khung(x + 40, y + 5, 40, 2, 0);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANH HOA", 6);
				khung(x + 40, y + 5 + 3, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 6, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 6);
				khung(x + 40, y + 5 + 9, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 6);
				khung(x + 40, y + 5 + 12, 40, 2, 14);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 15);
			}
			else if (kt == 5) {
				kt = 1;
				khung(x + 40, y + 5, 40, 2, 14);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANH HOA", 15);
				khung(x + 40, y + 5 + 3, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 6, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 6);
				khung(x + 40, y + 5 + 9, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 6);
				khung(x + 40, y + 5 + 12, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 6);
			}
		}
		else if (k == 1) {
			if (kt == 1) {
				kt = 5;
				khung(x + 40, y + 5, 40, 2, 0);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANH HOA", 6);
				khung(x + 40, y + 5 + 3, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 6, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 6);
				khung(x + 40, y + 5 + 9, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 6);
				khung(x + 40, y + 5 + 12, 40, 2, 14);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 15);
			}
			else if (kt == 5) {
				kt = 4;
				khung(x + 40, y + 5, 40, 2, 0);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANH HOA", 6);
				khung(x + 40, y + 5 + 3, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 6, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 6);
				khung(x + 40, y + 5 + 9, 40, 2, 14);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 15);
				khung(x + 40, y + 5 + 12, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 6);
			}
			else if (kt == 4) {
				kt = 3;
				khung(x + 40, y + 5, 40, 2, 0);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANH HOA", 6);
				khung(x + 40, y + 5 + 3, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 6, 40, 2, 14);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 15);
				khung(x + 40, y + 5 + 9, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 6);
				khung(x + 40, y + 5 + 12, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 6);
			}
			else if (kt == 3) {
				kt = 2;
				khung(x + 40, y + 5, 40, 2, 0);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANH HOA", 6);
				khung(x + 40, y + 5 + 3, 40, 2, 14);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 15);
				khung(x + 40, y + 5 + 6, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 6);
				khung(x + 40, y + 5 + 9, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 6);
				khung(x + 40, y + 5 + 12, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 6);
			}
			else if (kt == 2) {
				kt = 1;
				khung(x + 40, y + 5, 40, 2, 14);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANH HOA", 15);
				khung(x + 40, y + 5 + 3, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 6, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 6);
				khung(x + 40, y + 5 + 9, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 6);
				khung(x + 40, y + 5 + 12, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 6);
			}
		}
		else if (k == 3) {
			if (kt == 1) {
				system("cls");
				g.Display();
				Menu(g);
			}
			else if (kt == 2) {
				system("cls");
				g.Search();
				Menu(g);
			}// them chuc nang tu the
			else if (kt == 5) {
				system("cls");
				cout << "Dang thoat chuong trinh..." << endl;
				cout << "Nhan Enter de thoat";
				exit(0);
			}
		}
	}
}
