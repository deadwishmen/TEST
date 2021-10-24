#ifndef __MENU__
#define __MENU__

#include"goods.h"
//#include<iostream>
//#include<string>

#include<vector>
#include<fstream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>
#include<iomanip>
#include<math.h>


using namespace std;

void textcolor(int x);
void gotoxy(short x, short y);
void viet(int x, int y, int z);
int tksanpham(vector <goods> hanghoa, string s);
void khung(int x, int y, int m, int n, int mau);
void bangsanpham(int x, int y, int sl);
void TableOrder(int x, int y, int sl);
int keyboard();
int keyboard() {
	int k = _getch();
	if (k == 72) { // key up
		return 1;
	}
	else if (k == 80) { // key down
		return 2;
	}
	else if (k == 13) {//key enter
		return 3;
	}
	else if (k == 27) {// key esc
		return 4;
	}
}
void textcolor(int x)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}
void gotoxy(short x, short y)
{
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = { x, y };
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}
void viet(int x, int y, int z)
{
	gotoxy(x, y);
	printf("%c", z);
}

void vietchuoi(int x, int y, string s, int mau)
{
	gotoxy(x, y);
	textcolor(mau);
	cout << s;
}
int tksanpham(vector <goods> hanghoa, string s)
{

	for (int i = 0; i < hanghoa.size(); i++)
	{
		if (hanghoa[i].name == s)//stricmp so sanh chuoi
		{
			return i;
		}
	}
	return -1;
}

void khung(int x, int y, int m, int n, int mau)
{
	int i, j;
	textcolor(mau);
	for (i = x; i <= x + m; i++)
		for (j = y; j <= y + n; j++)
		{
			if (i == x || i == x + m)
			{
				if (j == y && i != x + m)
					viet(i, j, 45);
				else if (j == y && i != x)
					viet(i, j, 45);
				else if (j == y + n && i != x + m)
					viet(i, j, 45);
				else if (j == y + n && i != x)
					viet(i, j, 45);
				else viet(i, j, 124);
			}
			else if (j == y || j == y + n)
				viet(i, j, 45);
		}
}
void bangsanpham(int x, int y, int sl)
{
	int i, j;
	textcolor(2);
	for (i = x; i <= x + 117; i++)
		for (j = y; j <= y + sl; j++)
		{
			if (i == x || i == x + 4 || i == x + 15 || i == x + 43 || i == x + 57 || i == x + 72 || i == x + 86 || i == x + 104 || i == x + 117)
			{
				if (j == y && i != x && i != x + 117)
					viet(i, j, 45);
				else if (j == y && i != x + 117)
					viet(i, j, 45);
				else if (j == y && i != x)
					viet(i, j, 45);
				else if (j == y + 2 && i != x && i != x + 117)
					viet(i, j, 45);
				else if (j == y + 2 && i != x + 117)
					viet(i, j, 45);
				else if (j == y + 2 && i != x)
					viet(i, j, 45);
				else if (j == y + sl && i != x && i != x + 117)
					viet(i, j, 45);
				else if (j == y + sl && i != x + 117)
					viet(i, j, 45);
				else if (j == y + sl && i != x)
					viet(i, j, 45);
				else viet(i, j, 124);
			}
			else if (j == y || j == y + 2 || j == y + sl)
				viet(i, j, 45);
		}
	vietchuoi(x + 1, y + 1, "STT", 11);
	vietchuoi(x + 5, y + 1, "Ma hang", 11);
	vietchuoi(x + 16, y + 1, "Ten san pham", 11);
	vietchuoi(x + 44, y + 1, "Noi san xuat", 11);
	vietchuoi(x + 58, y + 1, "Mau sac", 11);
	vietchuoi(x + 73, y + 1, "Gia Ban", 11);
	vietchuoi(x + 87, y + 1, "Ngay nhap kho", 11);
	vietchuoi(x + 106, y + 1, "So luong", 11);
	//		vietchuoi(x+105,y+1,"Thanh tien",11);
}
void TableOrder(int x, int y, int sl)
{
	int i, j;
	textcolor(2);
	for (i = x; i <= x + 117; i++)
		for (j = y; j <= y + sl; j++)
		{
			if (i == x || i == x + 4 || i == x + 15 || i == x + 25 || i == x + 45 || i == x + 72 || i == x + 86 || i == x + 104 || i == x + 117)
			{
				if (j == y && i != x && i != x + 117)
					viet(i, j, 45);
				else if (j == y && i != x + 117)
					viet(i, j, 45);
				else if (j == y && i != x)
					viet(i, j, 45);
				else if (j == y + 2 && i != x && i != x + 117)
					viet(i, j, 45);
				else if (j == y + 2 && i != x + 117)
					viet(i, j, 45);
				else if (j == y + 2 && i != x)
					viet(i, j, 45);
				else if (j == y + sl && i != x && i != x + 117)
					viet(i, j, 45);
				else if (j == y + sl && i != x + 117)
					viet(i, j, 45);
				else if (j == y + sl && i != x)
					viet(i, j, 45);
				else viet(i, j, 124);
			}
			else if (j == y || j == y + 2 || j == y + sl)
				viet(i, j, 45);
		}
	vietchuoi(x + 1, y + 1, "STT", 11);
	vietchuoi(x + 6, y + 1, "Ma Hang", 11);
	vietchuoi(x + 16, y + 1, "So Luong", 11);
	vietchuoi(x + 28, y + 1, "Ten Khach Hang", 11);
	vietchuoi(x + 50, y + 1, "Dia Chi Khach Hang", 11);
	vietchuoi(x + 78, y + 1, "SDT", 11);
	vietchuoi(x + 89, y + 1, "Ngay Dat Hang", 11);
	vietchuoi(x + 106, y + 1, "Tong Tien", 11);
	//		vietchuoi(x+105,y+1,"Thanh tien",11);
}

#endif
