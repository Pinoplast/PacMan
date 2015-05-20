#include <iostream>
#include <windows.h>
#include <conio.h>
//#include <cstdint>
#include <ctime>
using namespace std;

HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

enum Colours { yellow = 14, brown = 6, red = 4, green = 2, blue = 1, black = 0 };
enum Control { right = 77, left = 75, up = 72, down = 80};
// 
void SetColorT(int colourTxt, int colourBck = black)
{
	SetConsoleTextAttribute(hCon, colourTxt | colourBck << 4);
}
bool SetColorTrueAndFalse(int colourTxt, int colourBck = black)
{
	SetConsoleTextAttribute(hCon, NULL | NULL);
	return 1;
}

void SetPosition(int x, int y)
{
	COORD coord = { x, y };
	SetConsoleCursorPosition(hCon, coord);
}
void ClearPreviousPosition(int, int);
void SetVisualFrames(int x, int y, int lenght, int height);
//int WhatColor(int& x, int& y, int lenght, int height, int& a, int *TimeX, int *TimeY);
void WhatCoord(int& x, int& y, int lenght, int height, int& a);
int sizeStep = 1;
int main()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hCon, &csbi);
	int oldAttr = csbi.wAttributes;
	SetColorT(yellow, blue);
	int x = 1, y = 1;
	int a;
	int lenght = 20, height = 11;
	bool cycle = true;
	//int pos;
	
	SetColorT(yellow, black);
	system("cls");
	SetColorT(yellow, yellow);
	SetVisualFrames(x, y, lenght, height);

	x = 2;			//start coords
	y = 2;

	SetPosition(x, y);
	SetColorT(black, yellow);
	cout << " ";			//initialization

	while (cycle)
	{
		WhatCoord(x, y, lenght, height, a);
	
		SetConsoleTextAttribute(hCon, oldAttr);
	}
}
/*int WhatColor(int& x, int& y, int lenght, int height, int& a, int *TimeX, int *TimeY){
		//Sleep(20);
		//a = _getch();
		if (a == 72)
		{
			((y - 1) >= 2) ? Sleep(20), y--, ClearPreviousPosition(*TimeX, *TimeY) : NULL;
		}
		else if (a == 80)
		{
			((y + 1) <= height+2) ? Sleep(20), y++, ClearPreviousPosition(*TimeX, *TimeY) : NULL;
		}
		else if (a == 77)
		{
			((x + 1) <= lenght - 1) ? x++, ClearPreviousPosition(*TimeX, *TimeY) : NULL;
		}
		else if (a == 75)
		{
			((x - 1) >= 2) ? x--, ClearPreviousPosition(*TimeX, *TimeY) : NULL;
		}
		SetColorT(yellow, yellow);
		SetPosition(x, y);

		cout << " ";
		SetPosition(x, y);
		
		
		
		
		

		return 14;
}*/
void ClearPreviousPosition(int timeArrX, int timeArrY){

	SetPosition(timeArrX, timeArrY);
	SetColorT(black, black);					//\\ clear previous position
	cout << " ";


}
void SetVisualFrames(int x, int y, int lenght, int height)
{
	for (int i = 0; i < lenght; i++)
	{
		SetPosition(x, y);
		SetColorT(yellow, blue);
		cout << " ";
		SetPosition(x++, (y + height) + 2);
		cout << " ";
	}
	x = 1;
	y = 1;
	for (int i = 0; i < (height / 2) + 1; i++)
	{
		SetPosition(x, y);
		SetColorT(yellow, blue);
		cout << " ";
		SetPosition(x + (lenght - 1), y++);
		cout << " ";
	}
	y += 2;
	for (int i = (height / 2); i < height ; i++)
	{
		SetPosition(x, y);
		SetColorT(yellow, blue);
		cout << " ";
		SetPosition(x + (lenght - 1), y++);
		cout << " ";
	}
	
	x = 3;			
	y = 3;

	SetPosition(x, y);
	cout << " ";
	SetPosition(++x, y);
	cout << " ";
	SetPosition(--x, ++y);
	cout << " ";
	SetPosition(x, ++y);
	cout << " ";
	SetPosition(x, ++y);
	cout << " ";
	SetPosition(x, y+=3);
	cout << " ";
	SetPosition(x, ++y);
	cout << " ";
	SetPosition(x, ++y);
	cout << " ";
	SetPosition(x, ++y);
	cout << " ";
	SetPosition(++x, y);
	cout << " ";
	x = 18;
	y = 3;

	SetPosition(--x, y);
	cout << " ";
	SetPosition(++x, y);
	cout << " ";
	SetPosition(x, ++y);
	cout << " ";
	SetPosition(x, ++y);
	cout << " ";
	SetPosition(x, ++y);
	cout << " ";
	SetPosition(x, y += 3);
	cout << " ";
	SetPosition(x, ++y);
	cout << " ";
	SetPosition(x, ++y);
	cout << " ";
	SetPosition(x, ++y);
	cout << " ";
	SetPosition(--x, y);
	cout << " ";






}
void WhatCoord(int& x, int& y, int lenght, int height, int& a){


	int *timeArrX = new int;
	int *timeArrY = new int;
	*timeArrX = x;
	*timeArrY = y;
	
	
	


	Sleep(20);
	a = _getch();
	if (a == 72)
		{
			((y - 1) >= 2 && SetColorTrueAndFalse(NULL , ( blue ) ? false : true)) ? Sleep(20), y--, ClearPreviousPosition(*timeArrX, *timeArrY) : NULL;
		}
		else if (a == 80)
		{
			((y + 1) <= height+2) ? Sleep(20), y++, ClearPreviousPosition(*timeArrX, *timeArrY) : NULL;
		}
		else if (a == 77)
		{
			((x + 1) <= lenght - 1) ? x++, ClearPreviousPosition(*timeArrX, *timeArrY) : NULL;
		}
		else if (a == 75)
		{
			((x - 1) >= 2) ? x--, ClearPreviousPosition(*timeArrX, *timeArrY) : NULL;
		}
	SetPosition(x, y);
	//SetColorT(NULL , ( blue ) ? NULL : WhatColor(x, y, lenght, height, a, timeArrX, timeArrY));


	/*
	
	*/






	delete[] timeArrX;
	timeArrX = nullptr;
	delete[] timeArrY;
	timeArrY = nullptr;
}