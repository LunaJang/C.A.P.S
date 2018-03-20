#pragma once
#include <iostream>
#include <string>
#include "EvtActEnd.h"
#include "Player.h"
#include "UI.h"
#define MAX_TURN 5

class GameManager {
	Player user;
	Event evt;
	Action act;
	Ending end;

	vector <string> mentions;
	vector <string> menuOptions;
	vector <string> actOptions;
	vector <string> monthlyEvent;

	int turn;
	bool alive;
public:
	// GameManager 생성자
	GameManager();

	// 메뉴 출력
	void readyGame();
	// 사용자 이름 및 성별 설정
	void startGame();
	// 각 turn 관리
	void playGame();
	// 게임 엔딩 관리
	void finishGame();
};