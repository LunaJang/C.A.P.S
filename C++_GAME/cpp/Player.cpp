#include "Player.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Player::Player()
{
	name = "seong";
	gender = true;
	currentState.popularity = 50;
	currentState.grade = 3.0;
	currentState.stress = 1;
}

string Player::getName()
{
	return name;
}

void Player::setName(string name)
{
	this->name = name;
}

bool Player::getGender()
{
	return gender;
}

void Player::setGender(bool gender)
{
	this->gender = gender;
}

State & Player::getCurrentState()
{
	return currentState;
}

void Player::setCurrentState(double grade, int stress, int popularity)
{
	currentState.grade = grade;
	currentState.popularity = popularity;
	currentState.stress = stress;

}

int main(void)
{

}