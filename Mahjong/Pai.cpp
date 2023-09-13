#include "Pai.h"
#include<iostream>
using namespace std;
Pai::Pai()
{
	id = 0;
	redDora = 0;
}
Pai::Pai(int i)
{
	id = i;
	redDora = 0;
}
Pai::Pai(int i, bool red)
{
	id = i;
	redDora = red;
}
void Pai::print()
{
	switch (id)
	{

	case 0:RED; cout << "一";  RESET; break;
	case 1:RED; cout << "二";  RESET; break;
	case 2:RED; cout << "三";  RESET; break;
	case 3:RED; cout << "四";  RESET; break;
	case 4:RED; if (!redDora)cout << "五";
		  else cout << "伍"; RESET; break;
	case 5:RED; cout << "六";  RESET; break;
	case 6:RED; cout << "七";  RESET; break;
	case 7:RED; cout << "八";  RESET; break;
	case 8:RED; cout << "九";  RESET; break;
	case 16:BLUE; cout << "一";  RESET; break;
	case 17:BLUE; cout << "二";  RESET; break;
	case 18:BLUE; cout << "三";  RESET; break;
	case 19:BLUE; cout << "四";  RESET; break;
	case 20:BLUE; if (!redDora)cout << "五";
		   else cout << "伍";  RESET; break;
	case 21:BLUE; cout << "六";  RESET; break;
	case 22:BLUE; cout << "七";  RESET; break;
	case 23:BLUE; cout << "八";  RESET; break;
	case 24:BLUE; cout << "九";  RESET; break;
	case 32:GREEN; cout << "一";  RESET; break;
	case 33:GREEN; cout << "二";  RESET; break;
	case 34:GREEN; cout << "三";  RESET; break;
	case 35:GREEN; cout << "四";  RESET; break;
	case 36:GREEN; if (!redDora)cout << "五";
		   else cout << "伍";  RESET; break;
	case 37:GREEN; cout << "六";  RESET; break;
	case 38:GREEN; cout << "七";  RESET; break;
	case 39:GREEN; cout << "八";  RESET; break;
	case 40:GREEN; cout << "九";  RESET; break;
	case 48:YELLOW; cout << "东";  RESET; break;
	case 56:YELLOW; cout << "南";  RESET; break;
	case 64:YELLOW; cout << "西";  RESET; break;
	case 72:YELLOW; cout << "北";  RESET; break;
	case 80:RED; cout << "中";  RESET; break;
	case 88:RESET; cout << "白";  RESET; break;
	case 96:GREEN; cout << "发";  RESET; break;
	default:RESET; cout << "口"; break;
	}
}
bool Pai::operator<(const Pai& x) const {
	return id < x.id;
}
void Pai::operator=(const Pai& x) {
	id = x.id;
	redDora = x.redDora;
}
bool Pai::operator==(const Pai& x) const {
	return id == x.id;
}

Pai Pai::operator+(const int x) {
	Pai res;
	res.id = id + x;
	return res;
}
Pai Pai::operator-(const int x) {
	Pai res;
	res.id = id - x;
	return res;
}
bool Pai::operator<=(const Pai& x) const {
	return id <= x.id;
}
bool Pai::operator>=(const Pai& x) const {
	return id >= x.id;
}