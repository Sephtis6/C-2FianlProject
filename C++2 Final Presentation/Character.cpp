#include <iostream>
#include <iomanip>
#include "Character.h"
using namespace std;

//displays the enemy class constructor and destuctor
Enemy::Enemy() {}
Enemy::~Enemy() { cout << "Enemy destructor called."; }

//getting the virables for the base enemy class allowing them to be modified when displayed
Enemy::Enemy(string N, int C) {
	name = N;
	health = C;
}

//has the enemy get and set the name of the displayed enemy
string Enemy::getName() { return name; }
void Enemy::setName(string N) { name = N; }

//has the enemy get and set the health of the displayed enemy
int Enemy::getHealth() { return health; }
void Enemy::setHealth(int C) { health = C; }

//displays the enemy class with the following text and the given name and health
void Enemy::display() {
	cout << "This Enemy is named " << name << " with "
		<< health << " health points." << endl << endl;
}

//getting the virables for the base minion class allowing them to be modified when displayed
Minion::Minion() {}
Minion::Minion(string mName, int mHealth, int mPower, int mMagic)
{
	name = mName;
	health = mHealth;
	power = mPower;
	magic = mMagic;
}
//gets and sets the minion power and magic
int Minion::getPower() { return power; }
void Minion::setPower(int mPower) { power = mPower; }
int Minion::getMagic() { return magic; }
void Minion::setMagic(int mMagic) { magic = mMagic; }

//displays the minion class with the following text desctribing their species name, health, power and magic
void Minion::display() {
	cout << "This Minion species/name is " << name
		<< " with " << health << " health points,"
		<< "and a power of " << power << ""
		<< " and a magic power of " << magic <<
		endl << endl;
}

//getting the virables for the base boss class allowing them to be modified when displayed
Boss::Boss() {}
Boss::Boss(string bName, int bHealth, int bPower, int bMagic)
{
	name = bName;
	health = bHealth;
	power = bPower;
	magic = bMagic;
}
//gets and sets the boss power and magic level
int Boss::getPower() { return power; }
void Boss::setPower(int bPower) { power = bPower; }
int Boss::getMagic() { return magic; }
void Boss::setMagic(int bMagic) { magic = bMagic; }

//displays the boss class with the following text desctribing their name, health, power and magic levels
void Boss::display() {
	cout << "This Boss is named " << name
		<< " with " << health << " health points,"
		<< "and a power level of " << power << ""
		<< "and a magic level of " << magic <<
		endl << endl;
}

//displays the character constructor and destuctor
Character::Character() {}
Character::~Character() { cout << "Character destructor called."; }

//getting the virables for the base character class allowing them to be modified when displayed
Character::Character(string N, int C) {
	name = N;
	health = C;
}

//has the character get and set the name of the displayed character
string Character::getName() { return name; }
void Character::setName(string N) { name = N; }

//has the character get and set the health of the displayed character
int Character::getHealth() { return health; }
void Character::setHealth(int C) { health = C; }

//displays the character class with the following text and the given name and health
void Character::display() {
	cout << "This Character is named " << name << " with "
		<< health << " health points." << endl << endl;
}

//getting the virables for the base player class allowing them to be modified when displayed
Player::Player() {}
Player::Player(string pName, int pHealth, int pPower, int pMagic)
{
	name = pName;
	health = pHealth;
	power = pPower;
	magic = pMagic;
}
//gets and sets the player power and magic level
int Player::getPower() { return power; }
void Player::setPower(int pPower) { power = pPower; }
int Player::getMagic() { return magic; }
void Player::setMagic(int pMagic) { magic = pMagic; }

//displays the player class with the following text desctribing their name, health, power and magic levels
void Player::display() {
	cout << "This player is named " << name
		<< " with " << health << " health points,"
		<< "and a power level of " << power << ""
		<< "and a magic level of " << magic <<
		endl << endl;
}

//getting the virables for the base helper class allowing them to be modified when displayed
Helper::Helper() {}
Helper::Helper(string hName, int hHealth, int hPower, int hMagic)
{
	name = hName;
	health = hHealth;
	power = hPower;
	magic = hMagic;
}
//gets and sets the helper power and magic level
int Helper::getPower() { return power; }
void Helper::setPower(int bPower) { power = bPower; }
int Helper::getMagic() { return magic; }
void Helper::setMagic(int bMagic) { magic = bMagic; }

//displays the helper class with the following text desctribing their name, health, power and magic levels
void Helper::display() {
	cout << "This helper is named " << name
		<< " with " << health << " health points,"
		<< "and a power level of " << power << ""
		<< "and a magic level of " << magic <<
		endl << endl;
}
