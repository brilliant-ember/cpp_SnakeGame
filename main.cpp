#include <iostream>
using namespace std;
bool gameOver;

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
	}
	return 0;
}