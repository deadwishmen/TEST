#ifndef __SEARCH__
#define __SEARCH__
#include"GoodManagement.h";
#include"goods.h";

using namespace std;

void TK(vector<goods> hh) {
	string s;
	int vitriTK = 12;
nhaplai:
	khung(0 + vitriTK, 0, 100, 2, 14);
	vietchuoi(1 + vitriTK, 1, "TIM KIEM:", 206); vietchuoi(75 , 4, "Nhap Ky Tu \"X\" và an [ENTER] De Thoat", 12);
	gotoxy(12 + vitriTK, 1); textcolor(14); fflush(stdin);
	for (;;) {
		textcolor(14);
		getline(cin, s);
		if (s == "X") {
			system("cls");
			return;
		}
		vietchuoi(75, 4, "                                     ", 12);
		int tam = tksanpham(hh, s);
		if (tam == -1) {
			vietchuoi(1 + vitriTK, 3, "Khong co san pham ton tai", 12);
			Sleep(2000);
			system("cls");
			goto nhaplai;
		}
		else {
			int k = 0;
			vietchuoi(112 - 20, 4, "Nhan [ESC] de tro ve", 12);
			textcolor(14);
			for (int i = 0; i < hh.size(); i++) {
				if (hh[tam].name == hh[i].name) {

					int y = 5 + k + 3;
					gotoxy(2, y); cout << k;
					gotoxy(5, y); cout << hh[i].seri;
					gotoxy(16, y); cout << hh[i].name;
					gotoxy(44, y); cout << hh[i].place;
					gotoxy(58, y); cout << hh[i].color;
					gotoxy(73, y); cout << hh[i].price;
					gotoxy(87, y); cout << hh[i].importDate[0] << "/" << hh[i].importDate[1] << "/" << hh[i].importDate[2];
					gotoxy(106, y); cout << hh[i].amount;
					k++;
				}
			}
			bangsanpham(0, 5, 3 + k);
			for (;;) {
				int h = keyboard();
				if (h == 4) {
					system("cls");
					return;
				}
			}
		}
	}
}
#endif
