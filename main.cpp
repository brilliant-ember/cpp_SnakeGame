#include <iostream>
using namespace std;
bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitx, fruity, score;


void setup() {
	gameOver = false;
}

void Draw(){}

void Input(){}

void Logic() {

}

int main() {
	setup();
	while (!gameOver) {
		Draw();
		Input();
		Logic();
		//sleep(10);
	}
	return 0;
}