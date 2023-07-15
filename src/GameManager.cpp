#include "Core.h"

GameManager* GameManager::instance = nullptr;

GameManager::GameManager(){}

//GameManager::~GameManager(){
//	delete instance;
//}

GameManager* GameManager::GetInstance(){	
	if(instance == nullptr)
		instance = new GameManager();

	return instance;
}

void GameManager::InitGame(){
	system(WINDOW_SIZE);
	
}



void GameManager::DrawMenu(){
	const char* Menu[7][12] = {
		{"■■",   "   ■  ■", " ■", "     ■", "     ■■■", "", "", "", "                       ■■■■", " ■■■", " ■          ■", " ■■■"},
		{"■  ■", " ■  ■", " ■", "     ■", "     ■", "", "", "                        ■", " ■    ■", " ■  ■", " ■          ■", " ■"},
		{"■  ■", " ■  ■", " ■", "     ■", "     ■", "      ■■■", "", "            ■", " ■", "       ■  ■", " ■    ■    ■", " ■"},
		{"■■",   "   ■  ■", " ■", "     ■", "     ■■■", "      ■", " ■■■", "     ■", " ■", "       ■  ■", " ■   ■■   ■", " ■■■"},
		{"■  ■", " ■  ■", " ■", "     ■", "         ■", "  ■■■", " ■  ■", " ■■■", " ■", "       ■  ■", " ■  ■  ■  ■", "     ■"},
		{"■  ■", " ■  ■", " ■", "     ■", "         ■", "  ■  ■", " ■  ■", " ■  ■", " ■    ■", " ■  ■", " ■ ■    ■ ■", "     ■"},
		{"■■",   "   ■■■", " ■■■", " ■■■", " ■■■", "  ■■■", " ■  ■", " ■■■", " ■■■■", " ■■■", " ■■      ■■", " ■■■"}
	};


	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 12; j++) {
			
			switch (j){
			case 0:
				RED;
				break;
			case 1:
				GREEN;
				break;
			case 2:
				BLUE_GREEN;
				break;
			case 3:
				PURPLE;
				break;
			case 4:
				GOLD;
				break;
			case 5:
				PLUM;
				break;
			case 6:
				YELLOW;
				break;
			case 7:
				WHITE;
				break;
			case 8:
				GRAY;
				break;
			case 9:
				SKY_BLUE;
				break;
			case 10:
				BLOOD;
				break;
			case 11:
				DARK_BLUE;
				break;
			case 12:
				HIGH_GREEN;
				break;
			}
			printf("%s", Menu[i][j]);
		}
		std::cout << std::endl;
	}
}

void GameManager::StartGame(){
	InitGame();
	// Gotoxy(10, 5);
	DrawMenu();
}

void GameManager::EndGame(){
}

void GameManager::Gotoxy(int x, int y){
	COORD cur;
	cur.X = x;
	cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cur);
}




