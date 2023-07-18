#include "Core.h"

GameManager* GameManager::instance = nullptr;

GameManager::GameManager(){}

// todo:: delete object
//GameManager::~GameManager(){
//	delete instance;
//}

GameManager* GameManager::GetInstance(){	
	if(instance == nullptr)
		instance = new GameManager();

	return instance;
}

void GameManager::InitGame(){
	// Window size setting
	system(WINDOW_SIZE);
	
}



void GameManager::DrawMenu(){
	int key = 0;
	int xPos = 40;
	int yPos = 10;
	int curMenu = 0;
	

	const char* menu[7][12] = {
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
			printf("%s", menu[i][j]);
		}
		std::cout << std::endl;
	}

	ORIGINAL;

	Gotoxy(xPos, yPos);
	std::cout << "싱글 플레이" << std::endl;
	Gotoxy(xPos, yPos + 2);
	std::cout << "멀티 플레이" << std::endl;
	Gotoxy(xPos + 1, yPos + 4);
	std::cout << "게임 종료" << std::endl;
	Gotoxy(xPos - 2, yPos);
	std::cout << ">" << "\n";

	while (true) {
		if (_kbhit()) {
			int key = _getch();

			if (key == 224 || key == 0) {
				key = _getch();

				switch (key) {
				case 80: // 아래 방향키
					if (curMenu < 2) {
						Gotoxy(xPos - 2, yPos + 2 * curMenu);
						std::cout << " " << "\n";

						Gotoxy(xPos - 2, yPos + 2 * (curMenu + 1));
						std::cout << ">" << "\n";
						curMenu++;
					}
					break;
				case 72: // 위 방향키
					if (curMenu > 0) {
						Gotoxy(xPos - 2, yPos + 2 * curMenu);
						std::cout << " " << "\n";

						Gotoxy(xPos - 2, yPos + 2 * (curMenu - 1));
						std::cout << ">" << "\n";
						curMenu--;
					}
					break;
				}
			}

			if (key == 13) { // 엔터 키
				// DoSomething
				break;
			}
		}
	}

}


void GameManager::StartGame(){
	InitGame();
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




