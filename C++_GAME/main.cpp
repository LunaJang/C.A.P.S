#pragma once
#include "headers.h"

using namespace std;

int main() {
	GameManager GM;

	// (랭킹확인 or 게임시작 or 프로그램종료 선택 받아옴)

	GM.startGame();
	GM.playGame();
	GM.finishGame();

	// (랭킹 출력)
}