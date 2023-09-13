#pragma once
#include<Windows.h>
#define RESET SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE)
#define RED SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED)
#define GREEN SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN)
#define YELLOW SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN)
#define BLUE SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE)
class Pai
{
public:
	int id;
	bool redDora;
	Pai();
	Pai(int);
	Pai(int, bool);
	void print();
	bool operator < (const Pai&) const;
	void operator = (const Pai&);
	bool operator == (const Pai&) const;
	Pai operator +(const int);
	Pai operator -(const int);
	bool operator <=(const Pai&)const;
	bool operator >=(const Pai&)const;
};