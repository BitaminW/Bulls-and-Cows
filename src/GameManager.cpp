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
	const char* Menu[10][14] = {
		"■■■■",
		
	
	
	};
}

void GameManager::StartGame(){
	InitGame();
	Gotoxy(10, 5);
	
}

void GameManager::EndGame(){
}

void GameManager::Gotoxy(int x, int y){
	COORD cur;
	cur.X = x;
	cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cur);
}




