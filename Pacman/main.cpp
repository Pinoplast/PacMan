//#include <iostream>
//using namespace std;
//class Shooter{
//private:
//	char* Immunition;
//	int size;
//public:
//
//};
//int main(){
//
//
//
//
//
//	return 0;
//}
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>
using namespace std;

HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

enum Colours { yellow = 14, brown = 6, red = 4, green = 2, blue = 1, black = 0 };
enum Control { right = 77, left = 75, up = 72, down = 80 };
void SetPosition(int x, int y)
{
	COORD coord = { x, y };
	SetConsoleCursorPosition(hCon, coord);
}
void SetColorT(int colourTxt, int colourBck = black)
{
	SetConsoleTextAttribute(hCon, colourTxt | colourBck << 4);
}
int* PlayerHP = new int;

void StartPage(){
	SetPosition(10, 10);
	SetColorT(yellow, black);
	int cols = 8, rows = 76;
	char **mx = new char*[cols];
	for (int i = 0; i < cols; i++)
	{
		mx[i] = new char[rows];
	}
	strcpy(mx[0], " ######         #         ######  #             #        #        #      #\0");
	strcpy(mx[1], "#      #       # #       #      # ##           ##       # #       ##     #\0");
	strcpy(mx[2], "#      #      #   #      #        # #         # #      #   #      # #    #\0");
	strcpy(mx[3], "#######      #     #     #        #  #       #  #     #     #     #  #   #\0");
	strcpy(mx[4], "#           #       #    #        #   #     #   #    #       #    #   #  #\0");
	strcpy(mx[5], "#          ###########   #        #    #   #    #   ###########   #    # #\0");
	strcpy(mx[6], "#         #           #  #      # #     # #     #  #           #  #     ##\0");
	strcpy(mx[7], "#        #             #  ######  #      #      # #             # #      #\0");
	SetPosition(20, 22);
	cout << "press any key for continue" << endl;
	for (int i = 0; i < cols; i++)
	{
		Sleep(50);
		SetPosition(3, i + 7);
		cout << mx[i];
	}
	while (!_kbhit())
	{
		for (int i = 0; i < cols; i++)
		{
			Sleep(20);
			SetColorT(red, black);
			SetPosition(3, i + 7);
			cout << mx[i];
		}

		for (int i = 0; i < cols; i++)
		{
			Sleep(20);
			SetColorT(green, black);
			SetPosition(3, i + 7);
			cout << mx[i];
		}

		for (int i = 0; i < cols; i++)
		{
			Sleep(20);
			SetColorT(yellow, black);
			SetPosition(3, i + 7);
			cout << mx[i];
		}
	}

}

void Winner(){
	system("cls");
	SetPosition(10, 10);
	SetColorT(yellow, black);
	int cols = 8, rows = 76;
	char **mx = new char*[cols];
	for (int i = 0; i < cols; i++)
	{
		mx[i] = new char[rows];
	}
	strcpy(mx[0], "#             #             #  #  #      #  #      #   ######   ##### \0");
	strcpy(mx[1], " #           # #           #   #  ##     #  ##     #  #        #     #\0");
	strcpy(mx[2], "  #         #   #         #    #  # #    #  # #    #  #        #     #\0");
	strcpy(mx[3], "   #       #     #       #     #  #  #   #  #  #   #  #        #     #\0");
	strcpy(mx[4], "    #     #       #     #      #  #   #  #  #   #  #   ######  ###### \0");
	strcpy(mx[5], "     #   #         #   #       #  #    # #  #    # #  #        # #    \0");
	strcpy(mx[6], "      # #           # #        #  #     ##  #     ##  #        #   #  \0");
	strcpy(mx[7], "       #             #         #  #      #  #      #   ######  #     #\0");
	for (int i = 0; i < cols; i++)
	{
		Sleep(50);
		SetPosition(3, i + 7);
		cout << mx[i];
	}
	while (true)
	{
		for (int i = 0; i < cols; i++)
		{
			Sleep(20);
			SetColorT(red, black);
			SetPosition(3, i + 7);
			cout << mx[i];
		}

		for (int i = 0; i < cols; i++)
		{
			Sleep(20);
			SetColorT(green, black);
			SetPosition(3, i + 7);
			cout << mx[i];
		}

		for (int i = 0; i < cols; i++)
		{
			Sleep(20);
			SetColorT(yellow, black);
			SetPosition(3, i + 7);
			cout << mx[i];
		}
	}


}

void GameOver(){
	system("cls");
	SetPosition(10, 10);
	SetColorT(yellow, black);
	int cols = 8, rows = 51;
	char **mx = new char*[cols];
	for (int i = 0; i < cols; i++)
	{
		mx[i] = new char[rows];
	}
	int cols2 = 8, rows2 = 45;
	char **mx2 = new char*[cols2];
	for (int i = 0; i < cols2; i++)
	{
		mx2[i] = new char[rows2];
	}
	strcpy(mx[0], " ######          #         #             #   ######\0");
	strcpy(mx[1], "#      #        # #        ##           ##  #      \0");
	strcpy(mx[2], "#              #   #       # #         # #  #      \0");
	strcpy(mx[3], "#             #     #      #  #       #  #  #      \0");
	strcpy(mx[4], "#  ####      #       #     #   #     #   #   ######\0");
	strcpy(mx[5], "#      #    ###########    #    #   #    #  #      \0");
	strcpy(mx[6], "#      #   #           #   #     # #     #  #      \0");
	strcpy(mx[7], " ######   #             #  #      #      #   ######\0");

	strcpy(mx2[0], " ######   #             #   ######   ##### \0");
	strcpy(mx2[1], "#      #   #           #   #        #     #\0");
	strcpy(mx2[2], "#      #    #         #    #        #     #\0");
	strcpy(mx2[3], "#      #     #       #     #        #     #\0");
	strcpy(mx2[4], "#      #      #     #       ######  ###### \0");
	strcpy(mx2[5], "#      #       #   #       #        # #    \0");
	strcpy(mx2[6], "#      #        # #        #        #   #  \0");
	strcpy(mx2[7], " ######          #          ######  #     #\0");

	while (true)
	{

		for (int i = 0; i < cols; i++)
		{
			Sleep(20);
			SetColorT(red, black);
			SetPosition(10 + 3, i + 4);
			cout << mx[i];
		}

		for (int i = 0; i < cols2; i++)
		{
			Sleep(20);
			SetColorT(red, black);
			SetPosition(14 + 3, i + 13);
			cout << mx2[i];
		}

		for (int i = 0; i < cols; i++)
		{
			Sleep(20);
			SetColorT(green, black);
			SetPosition(10 + 3, i + 4);
			cout << mx[i];
		}

		for (int i = 0; i < cols2; i++)
		{
			Sleep(20);
			SetColorT(green, black);
			SetPosition(14 + 3, i + 13);
			cout << mx2[i];
		}

		for (int i = 0; i < cols; i++)
		{
			Sleep(20);
			SetColorT(yellow, black);
			SetPosition(10 + 3, i + 4);
			cout << mx[i];
		}

		for (int i = 0; i < cols2; i++)
		{
			Sleep(20);
			SetColorT(yellow, black);
			SetPosition(14 + 3, i + 13);
			cout << mx2[i];
		}


	}
}
int PlayerX = 1, PlayerY = 21;				//start coords Players
int BotX = 1, BotY = 1;						//start coords Bots

void Breake(){
	PlayerX = 1, PlayerY = 21;
	BotX = 1, BotY = 1;
	if (!(*PlayerHP - 1 <= 0)) {

	 *PlayerHP = *PlayerHP - 1;
	 }
	 else
     {
         GameOver();
     }
}
class PacMan{
private:
	static int score;
	int cols, rows;
	char **maps;
public:
	PacMan(){
		cols = 22, rows = 24;
		maps = new char*[cols];
		for (int i = 0; i < cols; i++)
		{
			maps[i] = new char[rows];
		}
		for (int i = 0; i < cols; i++)
		{
			for (int j = 0; j < rows; j++)
			{
				maps[i][j] = '^';
			}
		}
	}

	/*int chek(int x, int y, int value){
	switch(value)
	{
	case 77:
	if (maps[x+1][y] == '#')
	{

	}
	break;

	}
	}*/

	inline void ShowResults(){
		SetPosition(37, 8);
		cout << "Your Score = " << score;
	}
	inline void ShowHP(){
		SetPosition(37, 12);
		cout << "Your HP = " << *PlayerHP;

		_getch();
	}

	void SetVisualFrames(){

		strcpy(maps[0], "#######################\0");
		strcpy(maps[1], "#---------------------#\0");
		strcpy(maps[2], "#-###-####-#-####-###-#\0");
		strcpy(maps[3], "#-###-####-#-####-###-#\0");
		strcpy(maps[4], "#---------------------#\0");
		strcpy(maps[5], "#-###-#-#######-#-###-#\0");
		strcpy(maps[6], "#-----#----#----#-----#\0");
		strcpy(maps[7], "#####-####-#-####-#####\0");
		strcpy(maps[8], "    #-#---------#-#    \0");
		strcpy(maps[9], "#####-#-#######-#-#####\0");
		strcpy(maps[10], "&-------#     #-------&\0");
		strcpy(maps[11], "#####-#-#######-#-#####\0");
		strcpy(maps[12], "    #-#---------#-#    \0");
		strcpy(maps[13], "#####-#-#######-#-#####\0");
		strcpy(maps[14], "#----------#----------#\0");
		strcpy(maps[15], "#-###-####-#-####-###-#\0");
		strcpy(maps[16], "#---#-------------#---#\0");
		strcpy(maps[17], "###-#-#-#######-#-#-###\0");
		strcpy(maps[18], "#-----#----#----#-----#\0");
		strcpy(maps[19], "#-########-#-########-#\0");
		strcpy(maps[20], "#---------------------#\0");
		strcpy(maps[21], "#######################\0");

		maps[PlayerX][PlayerY] = '*';
		maps[BotX][BotY] = '%';

		SetColorT(yellow, black);
		for (int i = 0; i < cols; i++)
		{
			for (int j = 0; j < rows; j++)
			{
				SetPosition(j * 2, i);
				cout << maps[i][j];
			}
			cout << endl;
		}



		SetColorT(blue, blue);

		for (int i = 0; i < cols; i++)
		{
			for (int j = 0; j < rows; j++)
			{
				if (maps[i][j] == '#')
				{
					SetPosition(j * 2, i);

					cout << maps[i][j];
				}
			}
			cout << endl;
		}

		for (int i = 0; i < cols; i++)
		{
			for (int j = 0; j < rows - 1; j++)
			{

				if (maps[i][j] == '#' && maps[i][j + 1] == '#')
				{
					SetPosition((j * 2) + 1, i);
					cout << " ";
				}
			}
		}

		SetColorT(yellow, black);
	}

	void WhatCoord(int &PlayerX, int &PlayerY){
		int choice = 0;
		int *previousX = new int;
		int *previousY = new int;

		choice = _getch();
		while (!_kbhit()){
			//choice = 77;
			*previousX = PlayerX;
			*previousY = PlayerY;
			Sleep(140);
			switch (choice)
			{
			case 77:
				if (maps[PlayerX][PlayerY + 1] != '#' && maps[PlayerX][PlayerY + 1] != '\0') {
					(maps[PlayerX][PlayerY + 1] == '-') ? score++ : 0;
					PlayerY++;
					maps[PlayerX][PlayerY] = '*';
					ClearPreviousCoord(previousX, previousY);
					ShowNextStep(PlayerX, PlayerY);
				}
				else if (maps[PlayerX][PlayerY + 1] == '\0')
				{
					PlayerY = 0;
					ClearPreviousCoord(previousX, previousY);
					ShowNextStep(PlayerX, PlayerY);
				}



				break;
			case 75:
				if (maps[PlayerX][PlayerY - 1] != '#' && maps[PlayerX][PlayerY - 1] != '&'){
					(maps[PlayerX][PlayerY - 1] == '-') ? score++ : 0;
					PlayerY--;
					maps[PlayerX][PlayerY] = '*';
					ClearPreviousCoord(previousX, previousY);
					ShowNextStep(PlayerX, PlayerY);
				}
				else if (maps[PlayerX][PlayerY - 1] == '&')
				{
					PlayerY = 22;
					ClearPreviousCoord(previousX, previousY);
					ShowNextStep(PlayerX, PlayerY);
				}


				break;
			case 72:
				if (maps[PlayerX - 1][PlayerY] != '#') {
					(maps[PlayerX - 1][PlayerY] == '-') ? score++ : 0;
					PlayerX--;
					maps[PlayerX][PlayerY] = '*';
					ClearPreviousCoord(previousX, previousY);
					ShowNextStep(PlayerX, PlayerY);
				}


				break;
			case 80:
				if (maps[PlayerX + 1][PlayerY] != '#') {
					(maps[PlayerX + 1][PlayerY] == '-') ? score++ : 0;
					PlayerX++;
					maps[PlayerX][PlayerY] = '*';
					ClearPreviousCoord(previousX, previousY);
					ShowNextStep(PlayerX, PlayerY);
				}
				break;
			}
			if (score >= 160)
            {
                Winner();
            }

			RunBots();
		}
		delete[] previousX;
		previousX = NULL;
		delete[] previousY;
		previousY = NULL;

	}

	void RunBots(){

		int *previousX = new int;
		int *previousY = new int;
		*previousX = BotX;
		*previousY = BotY;
		int choice;
		SetPosition(BotX, BotY);
		choice = 0;
		bool l = 0;

		if (PlayerY < BotY && PlayerX == BotX)
		{
			choice = 75;
		}
		else if (PlayerX < BotX && PlayerY == BotY)
		{
			choice = 72;
		}
		else if (PlayerY > BotY && PlayerX == BotX)
		{
			choice = 77;
		}
		else if (PlayerX > BotX && PlayerY == BotY)
		{
			choice = 80;
		}
		else if (PlayerX > BotX && PlayerY > BotY)
		{
			choice = ((PlayerX - BotX) > (PlayerY - BotY)) ? 77 : 80;
		}
		else if (PlayerX < BotX && PlayerY > BotY)
		{
			choice = ((BotX - PlayerX) > (PlayerY - BotY)) ? 77 : 72;
		}
		else if ((PlayerY < BotY && PlayerX > BotX))
		{
			choice = ((PlayerY - BotY) > (BotX - PlayerX)) ? 75 : 80;
		}
		else if ((PlayerX < BotX && PlayerY < BotY))
		{
			choice = ((PlayerX - BotX) < (PlayerY - BotY)) ? 75 : 72;
		}
		else if (PlayerY == BotY && PlayerX == BotX)
		{
			choice = 999;
		}
		switch (choice)
		{
		case 77:
			if (maps[BotX][BotY + 1] != '#' && maps[BotX][BotY + 1] != '\0') {
				l = (maps[BotX][BotY + 1] == '-') ? 0 : 1;
				BotY++;
				maps[BotX][BotY] = '%';
				ClearPreviousCoord(previousX, previousY, l);
				ShowNextStep(BotX, BotY);
			}
			break;
		case 75:
			if (maps[BotX][BotY - 1] != '#' && maps[BotX][BotY - 1] != '&'){
				l = (maps[BotX][BotY - 1] == '-') ? 0 : 1;
				BotY--;
				maps[BotX][BotY] = '%';
				ClearPreviousCoord(previousX, previousY, l);
				ShowNextStep(BotX, BotY);
			}
			break;
		case 72:
			if (maps[BotX - 1][BotY] != '#') {
				l = (maps[BotX - 1][BotY] == '-') ? 0 : 1;
				BotX--;
				maps[BotX][BotY] = '%';
				ClearPreviousCoord(previousX, previousY, l);
				ShowNextStep(BotX, BotY);
			}
			break;
		case 80:
			if (maps[BotX + 1][BotY] != '#') {
				l = (maps[BotX + 1][BotY] == '-') ? 0 : 1;
				BotX++;
				maps[BotX][BotY] = '%';
				ClearPreviousCoord(previousX, previousY, l);
				ShowNextStep(BotX, BotY);
			}
			break;
		case 999:
			maps[BotX][BotY] = ' ';
			Breake();
			ShowHP();
		}
		delete[] previousX;
		previousX = NULL;
		delete[] previousY;
		previousY = NULL;
	}

	inline void ShowNextStep(int x, int y){
		SetPosition(y * 2, x);
		cout << maps[x][y];
	}

	inline void ClearPreviousCoord(int* previousX, int* previousY, bool l){
		if (l)
		{
			SetPosition((*previousY) * 2, *previousX);
			cout << " ";
		}
		else
		{
			SetPosition((*previousY) * 2, *previousX);
			cout << "-";
		}
	}

	inline void ClearPreviousCoord(int* previousX, int* previousY){
		SetPosition((*previousY) * 2, *previousX);
		cout << " ";
	}

	~PacMan(){
		for (int i = 0; i < cols; i++)
		{
			delete[] maps[i];
		}
		delete[] maps;
		maps = NULL;
	}
};

int PacMan::score = 0;


int main()
{
	PacMan GameOne;
	*PlayerHP = 3;
	StartPage();
	_getch();
	system("cls");

	GameOne.SetVisualFrames();				//Show Maps
	GameOne.ShowHP();

	bool cycle = true;

	while (cycle)
	{
		GameOne.ShowResults();

		GameOne.WhatCoord(PlayerX, PlayerY);

	}

	return 0;
}









