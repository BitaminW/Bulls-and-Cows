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

	
}



void GameManager::DrawMenu(){
	const char* Menu[7][14] = {
		{"■■",   "    ■  ■", "  ■", "      ■", "      ■■■"},
		{"■  ■", "  ■  ■", "  ■", "      ■", "      ■"},
		{"■  ■", "  ■  ■", "  ■", "      ■", "      ■"},
		{"■■",   "    ■  ■", "  ■", "      ■", "      ■■■"},
		{"■  ■", "  ■  ■", "  ■", "      ■", "          ■"},
		{"■  ■", "  ■  ■", "  ■", "      ■", "          ■"},
		{"■■",   "    ■■■", "  ■■■", "  ■■■", "  ■■■"}
	};


	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 14; j++) {
			
			switch (j){
			case 0:
				RED
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




