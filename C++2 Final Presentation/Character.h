#pragma once
#ifndef Character_H
#define Character_H

//include the following and uses the namespace
#include <iostream>
#include <string>
using namespace std;

//creates the base enemy class to be used in this program
class Enemy {
public:
	//public uses
	Enemy();
	Enemy(std::string N, int C);
	~Enemy();

	//gets and sets the name and health of the enemy class and displays
	string getName();
	void setName(string);
	int getHealth();
	void setHealth(int);
	void display();
protected:
	//available for inheriting by subclasses of character
	string name;
	int health;
private:
};


//displays the class name and the parent class
class Minion : public Enemy {
public:
	//gets and sets power speed and magic due to the fact that health and name are inherited from the parent class
	Minion();
	Minion(string mName, int mHealth, int mPower, int mMagic);
	int getPower();
	void setPower(int mPower);
	int getMagic();
	void setMagic(int mMagic);
	void display();
	void display(bool details);
private:
	//private factors for this class only not for the parent or any sibling classes
	int power;
	int magic;
};

//displays the class name and parant class
class Boss : public Enemy {
public:
	//gets and sets boss power and magic due to the fact that health and name are inherited from the parent class
	Boss();
	Boss(string bName, int bHealth, int bPower, int bMagic);
	int getPower();
	void setPower(int bPower);
	int getMagic();
	void setMagic(int bMagic);
	void display();
	void display(bool details);
private:
	//private factors for this class only not for the parent or any sibling classes
	int power;
	int magic;
};

//creates the base character class to be used in this program
class Character {
public:
	//public uses
	Character();
	Character(std::string N, int C);
	~Character();

	//gets and sets the name and health of the character class and displays
	string getName();
	void setName(string);
	int getHealth();
	void setHealth(int);
	void display();
protected:
	//available for inheriting by subclasses of character
	string name;
	int health;
private:
};

//displays the class name and the parent class
class Player : public Character {
public:
	//gets and sets players power and magic due to the fact that health and name are inherited from the parent class
	Player();
	Player(string pName, int pHealth, int pPower, int pMagic);
	int getPower();
	void setPower(int pPower);
	int getMagic();
	void setMagic(int pMagic);
	void display();
	void display(bool details);
private:
	//private factors for this class only not for the parent or any sibling classes
	int power;
	int magic;
};

//displays the class name and parent class
class Helper : public Character {
public:
	//gets and sets helpers power and magic due to the fact that health and name are inherited from the parent class
	Helper();
	Helper(string hName, int hHealth, int hPower, int hMagic);
	int getPower();
	void setPower(int hPower);
	int getMagic();
	void setMagic(int hMagic);
	void display();
	void display(bool details);
private:
	//private factors for this class only not for the parent or any sibling classes
	int power;
	int magic;
};

#endif

