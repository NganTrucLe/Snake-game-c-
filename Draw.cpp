#include "Draw.h"

void drawWall() {
	for (int x = WALL_LEFT; x <= WALL_RIGHT; x++) {
		gotoXY(x, WALL_ABOVE);
		cout << (char)220;
	}
	for (int x = WALL_LEFT; x <= WALL_RIGHT; x++) {
		gotoXY(x, WALL_BOTTOM);
		cout << (char)223;
	}
	for (int y = WALL_ABOVE + 1; y < WALL_BOTTOM; y++) {
		gotoXY(WALL_LEFT, y);
		cout << (char)221;
	}
	for (int y = WALL_ABOVE + 1; y < WALL_BOTTOM; y++) {
		gotoXY(WALL_RIGHT, y);
		cout << (char)222;
	}
}
void drawScore(int score)
{
	setTextColor(7);
	gotoXY(WALL_RIGHT + 5, WALL_ABOVE + 4);
	cout << "SCORE:" << score;
}
void drawWallAroundScoreBoard()
{
	for (int x = WALL_RIGHT + 1; x <= 120; x++)
	{
		gotoXY(x, WALL_ABOVE);
		cout << (char)220;
	}
	for (int x = WALL_RIGHT + 1; x <= 120; x++)
	{
		gotoXY(x, WALL_BOTTOM);
		cout << (char)223;
	}
	for (int x = WALL_RIGHT + 1; x <= 120; x++)
	{
		gotoXY(x, WALL_ABOVE+15);
		cout << (char)223;
	}
	for (int y = WALL_ABOVE+1; y <= WALL_BOTTOM-1; y++)
	{
		gotoXY(120, y);
		cout << (char)219;
	}
}
void drawScoreBoard()
{
	drawWallAroundScoreBoard();
	drawSettingsBoard();
	/*fontsize(30, 30);*/
	setTextColor(11);
	gotoXY(WALL_RIGHT + 16, WALL_ABOVE+1);
	cout << "SCOREBOARD"; 
	setTextColor(6);
	gotoXY(WALL_RIGHT + 5, WALL_ABOVE+6);
	cout << "HOW TO PLAY:";
	drawKeyMove();
	setTextColor(3);
	gotoXY(WALL_RIGHT + 5, WALL_ABOVE + 13);
	cout << "HIGHSCORE: ";
}
void drawKeyMove()
{
	gotoXY(WALL_RIGHT + 18, WALL_ABOVE + 9);
	cout << "LEFT";
	gotoXY(WALL_RIGHT + 27, WALL_ABOVE + 9);
	cout << "RIGHT";
	gotoXY(WALL_RIGHT + 24, WALL_ABOVE + 7);
	cout << "UP";
	gotoXY(WALL_RIGHT + 23, WALL_ABOVE + 11);
	cout << "DOWN";
	gotoXY(WALL_RIGHT + 22, WALL_ABOVE + 9);
	cout << (char)17;
	gotoXY(WALL_RIGHT + 26, WALL_ABOVE + 9);
	cout << (char)16;
	gotoXY(WALL_RIGHT + 24, WALL_ABOVE + 8);
	cout << (char)30;
	gotoXY(WALL_RIGHT + 24, WALL_ABOVE + 10);
	cout << (char)31;

}
void drawGate(int x,int y)
{
	vector<pii>gate;
	setTextColor(14);
	gotoXY(x, y);
	cout << (char)221;
	for (int i = x; i < x + 4; i++)
	{
		gotoXY(i, y - 1);
		cout << (char)220;
		gate.push_back(pii(i, y - 1));
	}
	gotoXY(x + 3, y);
	cout << (char)222;
	gate.push_back(pii(x+3, y));
}
void drawSettingsBoard()
{
	setTextColor(11);
	gotoXY(WALL_RIGHT + 5, WALL_ABOVE + 16);
	cout << "SETTINGS";
	setTextColor(8);
	gotoXY(WALL_RIGHT + 5, WALL_ABOVE + 18);
	cout << "PAUSE";
	gotoXY(WALL_RIGHT + 5, WALL_ABOVE + 20);
	cout << "SAVE AND EXIT";
}
void announceGameOver(int score) {
	int key;
	key = inputKey();
	Level_1();
	setTextColor(11);
	gotoXY(39, 11);
	cout << "GAME OVER" << endl;
	gotoXY(36, 12);
	cout << "Your score:" << score;
	gotoXY(37, 13);
	cout << "Try again? (y/n):";
	/*if (key == KEY_Y)
	{
		//continue the game with level 1
	}
	if (key == KEY_N)
	{
		//return menu game
	}*/
	for (int i = 0; i < 10; i++)
	{
		cout << endl;
	}
	setTextColor(15);
}