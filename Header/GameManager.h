#pragma once

class GameManager{
public:
	static GameManager* GetInstance();

	
	void StartGame();
	

public:
	

private:
	void EndGame();

	void InitGame();
	void DrawMenu();

	void Gotoxy(int x, int y);


private:
	GameManager();
	// ~GameManager();

private:
	static GameManager* instance;

};

