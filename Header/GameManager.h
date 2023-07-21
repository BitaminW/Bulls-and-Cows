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
	void SingleModeLoop();

	void Gotoxy(int x, int y);
	void DisableCursor();

private:
	GameManager();
	// ~GameManager();

private:
	static GameManager* instance;

};

