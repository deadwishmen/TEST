#ifndef __DISPLAY__
#define __DISPLAY__
#include"GoodManagement.h";
#include"goods.h";

using namespace std;
	
void HT(vector<goods> hh) {
	int n = hh.size() + 3;
	if (!hh.empty() && hh.size()<=1) {
		vietchuoi(50, 1, "[Hien Tai Chua Co Hang Hoa]", 12);
		Sleep(1500);
		return;
	}
	vietchuoi(50, 1, "Nhan [ESC] de tro ve ", 12);
	bangsanpham(0, 2, n);
	for (int i = 0; i < hh.size(); i++) {
		int y = 5 + i;
		gotoxy(2, y); cout << i + 1;
		gotoxy(5, y); cout << hh[i].seri;
		gotoxy(16, y); cout << hh[i].name;
		gotoxy(44, y); cout << hh[i].place;
		gotoxy(58, y); cout << hh[i].color;
		gotoxy(73, y); cout << hh[i].price;
		gotoxy(87, y); cout << hh[i].importDate[0] << "/" << hh[i].importDate[1] << "/" << hh[i].importDate[2];
		gotoxy(106, y); cout << hh[i].amount;
	}
	int h = keyboard();
	if (h == 4) {
		system("cls");
	}
	else {
		HT(hh);
	}
}

#endif

