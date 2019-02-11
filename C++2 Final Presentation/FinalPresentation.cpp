#include <iostream>
#include <string>
#include <iomanip>
#include "Character.h"
#include <thread>
#include <mutex>
#include <cstdlib>
#include <stack>
#include <vector>
#include <functional> 
#include <condition_variable>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <boost/random.hpp>
#include <ctime>
#include <cstdint>
#include <stdio.h>
#include <time.h>
//standard namespace
using namespace std;
std::mutex mtx;

//ints being used in the program
int a;
int b;
int numberOne;
int numberTwo;
int numberThree;
int numberFour;
int number;

//thread cm(characterMaker);
//thread mp(multithreadProblems);
//thread tv(templateVoid);
//thread rnf(randomNumberFinder);

//will clear the screen in order to allow new info to be printed
//system("CLS");

//declare functions to be used
//these are the function signitures
void DisplayUserCommands();
void characterMaker();
void multithreadProblems();
void templateVoid();
void randomNumberFinder();
//variable to hold the user name
string userName;

//where the program begins
int main()
{
	//put code block in to collapse it for space
	{
		//asks the user to input their name in order to get their username
		cout << "Please enter your name: ";
		cin >> userName;
	start:
		system("CLS");
		//name of game and welcome the user
		cout << "Welcome to the Arcade of mystery and randomness..." << endl;

		//layout the background/setting for the user
		cout << "You will have multiple types of games and activities in order to keep you busy.\n";
		cout << "You may do the options multiple times or move from one option to another after each.\n";
		cout << userName << "Please pick an option of what activity you want to do first." << endl;
	}
	//calling a function to display the list of user commands
	DisplayUserCommands();
	//get's the user's choice and does something based on it
	cout << "Please enter a number: " << endl;
	cin >> number;
	//does something based on the number the user picks
	switch (number)
	{
		//clears the system of outputs and then loads a void based on the number picked
	case 1:
		system("CLS");
		characterMaker();
		goto start;
		break;
	case 2:
		system("CLS");
		multithreadProblems();
		goto start;
		break;
	case 3:
		system("CLS");
		templateVoid();
		goto start;
		break;
	case 4:
		system("CLS");
		randomNumberFinder();
		goto start;
		break;
	case 5:
		system("CLS");
		return 0;
		break;
	default:
		cout << "You chose an unavailable option. Program will close soon." << endl;
		break;
	}

	system("Pause");
	return 0;
}

// funtion to display the list of user commands
void DisplayUserCommands() {
	cout << "Enter a Number:" << endl;
	cout << "1 Create your own character class and battle a premade Boss" << endl;
	cout << "2 Do some random questions to test your intelect" << endl;
	cout << "3 Do some problems that are created by way of templates" << endl;
	cout << "4 Search for a randomly generated number by playing against computer generated players" << endl;
	cout << "5 End the Program" << endl;
}

//void for the character maker option
void characterMaker()
{
	//ints used in this void
	int characterHealth;
	int characterPower;
	int characterMagic;

	//welcomes the player and asks for what they want for their character health, power, and magic power
	cout << "Welcome to the character maker section of this program." << userName << "\n";
	cout << "Please enter your character's health(less than 100): \n";
	cin >> characterHealth;
	cout << "Please enter your character's power: \n";
	cin >> characterPower;
	cout << "Please enter your character's magic power: \n";
	cin >> characterMagic;

	//tells them that it will diplay their character and it's helper
	cout << "Now you will see your character and it's helper for this mock boss fight\n";

	//displays the variables both private and inhertied with the given numbers
	Player Player1 = Player("Nameless Protagonist", characterHealth, characterPower, characterMagic);
	Player1.display();
	//displays the variables both private and inhertied with the given numbers
	Helper Helper1 = Helper("Timmy the Zombie", 20, 15, 15);
	Helper1.display();

	//asks the player to accept in order to fight the bosss and it's helper
	cout << "When ready to continue press a key to see your enemy\n";
	system("Pause");

	//displays the variables both private and inhertied with the given numbers
	Minion Minion1 = Minion("Alucard", 25, 20, 10);
	Minion1.display();
	//displays the variables both private and inhertied with the given numbers
	Boss Boss1 = Boss("Gleam-eyes", 100, 55, 35);
	Boss1.display();
	//allows the player to decide if they won the battle
	cout << "Depending on how well your character stats and your helpers stats you might have won the fight\n";
	cout << "If you have deemed yourself the winner, pat yourself on the back.\n";
	cout << "Otherwise better luck next time.\n";
	//pauses to allow you to read the outputs displayed
	system("pause");
}

// Merlin Call Skynet HK Wargames.cpp : Defines the entry point for the console application.
//Guess My number
//THe classic number guessing game

//main role of the program
void randomNumberFinder()
{
		std::time_t now = std::time(0);
		boost::random::mt19937 gen{ static_cast<std::uint32_t>(now) };
		boost::random::uniform_int_distribution<> dist{ 1, 100 };
		std::cout << dist(gen) << '\n';

	//random number between 1 and 64
	//enemy location = secretNumber
	//the tries for each player
	int secretNumber = dist(gen);
	int playertries = 0;
	int binarytries = 0;
	int randomtries = 0;
	int lineartries = 0;

	//integers naming the highest and lowest guess
	int highestguess = 100;
	int lowestguess = 1;

	//integer named type of search for the guesses
	int playerNumber;
	int binaryNumber;
	int randomNumber;
	int linearNumber = 0;

	//types out the opening lines
	cout << "Welcome to random number generator\n";
	cout << "Initializing the random number program.\n";
	cout << "The goal is to find the number before your AI opponents.\n";
	cout << "Generating random number to find.\n";
	//cout << "The enemy is located at " << secretNumber << " on an 8x8 grid.\n\n\n";

	//does depending on what the code prints out
	//human search function
	do
	{
		//asking for the player to enter a number and add 1 to their tries
		cout << "Enter a number to search.(1-100)\n";
		cin >> playerNumber;
		++playertries;

		//does something if the palyerNumber > secretNumber
		if (playerNumber > secretNumber)
		{
			//prints out whether the guess is to low and the number it guessed and whether the targets where there or not
			//then resets the ranges to reflect based on the previous guess whether it was higher or lower
			cout << "That is not the correct number! (too high)\n";
			cout << "Number guessed " << playerNumber << "\n\n";
		}
		//does something if the playerNumber < secretNumber
		else if (playerNumber < secretNumber)
		{
			//prints out whether the guess is to low and the number it guessed and whether the targets where there or not
			//then resets the ranges to reflect based on the previous guess whether it was higher or lower
			cout << "That is not the correct number! (too low)\n";
			cout << "Number guessed " << playerNumber << "\n\n";
		}

		//does something if not one of the two previous statements
		else
		{
			//prints out that the computers guess was right and what the number was and how many tries it wook
			cout << "That number is correct! The number was " << secretNumber << " and took " << playertries + 1 << " tries\n\n\n";
		}
		//this states that while playerNumber != secretNumber
	} while (playerNumber != secretNumber);

	//binary search function
	do
	{
		//random number between the integers of highest and lowest guess
		binaryNumber = ((highestguess - lowestguess) / 2) + lowestguess;

		//does something if the binaryNumber > secretNumber
		if (binaryNumber > secretNumber)
		{
			//prints out whether the guess is to low and the number it guessed and whether the targets where there or not
			//then resets the ranges to reflect based on the previous guess whether it was higher or lower
			//cout << "The Binary AI has not found it's target! (too high)\n";
			//cout << "Number guessed " << binaryNumber << "\n\n";
			highestguess = binaryNumber;
			++binarytries;
		}
		//does something if the binaryNumber < secretNumber
		else if (binaryNumber < secretNumber)
		{
			//prints out whether the guess is to low and the number it guessed and whether the targets where there or not
			//then resets the ranges to reflect based on the previous guess whether it was higher or lower
			//cout << "The Binary AI has not found it's target! (too low)\n";
			//cout << "Number guessed " << binaryNumber << "\n\n";
			lowestguess = binaryNumber;
			++binarytries;
		}

		//does something if not one of the two previous statements
		else
		{
			//prints out that the computers guess was right and what the number was and how many tries it wook
			cout << "The Binary AI has found it's target! The number  " << secretNumber << " and took " << binarytries + 1 << " tries\n\n\n";
		}
		//this states that while binaryNumber != secretNumber
	} while (binaryNumber != secretNumber);

	//random search function
	do
	{
		//random number between 0 and 64
		randomNumber = rand() % 100 + 1;

		//does something if the randomNumber > secretNumber
		if (randomNumber > secretNumber)
		{
			//prints out whether the guess is to low and the number it guessed and whether the targets where there or not
			//then resets the ranges to reflect based on the previous guess whether it was higher or lower
			//cout << "The Random AI has not found it's target! (too high)\n";
			//cout << "Number guessed " << randomNumber << "\n\n";
			++randomtries;
		}
		//does something if the randomNumber < secretNumber
		else if (randomNumber < secretNumber)
		{
			//prints out whether the guess is to low and the number it guessed and whether the targets where there or not
			//then resets the ranges to reflect based on the previous guess whether it was higher or lower
			//cout << "The Random AI has not found it's target! (too low)\n";
			//cout << "Times guessed " << randomNumber << "\n\n";
			++randomtries;
		}

		//does something if not one of the two previous statements
		else
		{
			//prints out that the computers guess was right and what the number was and how many tries it wook
			cout << "The Random AI has found it's target! The number " << secretNumber << " and took " << randomtries + 1 << " tries\n\n\n";
		}
		//this states that while randomNumber != secretNumber
	} while (randomNumber != secretNumber);

	//linear search function
	do
	{
		//started off with thte number 1 and keeps adding 1 till it hits the number
		linearNumber = linearNumber + 1;

		//does something if the randomNumber > secretNumber
		if (linearNumber > secretNumber)
		{
			//prints out whether the guess is to low and the number it guessed and whether the targets where there or not
			//then resets the ranges to reflect based on the previous guess whether it was higher or lower
			//cout << "The Linear AI has not found it's target! (too high)\n";
			//cout << "Number guessed " << linearNumber << "\n\n";
			++lineartries;
		}
		//does something if the randomNumber < secretNumber
		else if (linearNumber < secretNumber)
		{
			//prints out whether the guess is to low and the number it guessed and whether the targets where there or not
			//then resets the ranges to reflect based on the previous guess whether it was higher or lower
			//cout << "The Linear AI has not found it's target! (too low)\n";
			//cout << "Number guessed " << linearNumber << "\n\n";
			++lineartries;
		}

		//does something if not one of the two previous statements
		else
		{
			//prints out that the computers guess was right and what the number was and how many tries it wook
			cout << "The Linear AI has found it's target! The number " << secretNumber << " and took " << lineartries + 1 << " tries\n\n\n";
		}
		//this states that while randomNumber != secretNumber
	} while (linearNumber != secretNumber);

	//lists the "scores" of each player
	do {
		//lists the game has ended and what the location was and in how many tries each player took
		cout << "All players have found the number.\n";
		cout << "The number was located at " << secretNumber << ".\n\n";
		cout << "The Player has found it's target! The number " << secretNumber << " and took " << playertries + 1 << " tries\n\n";
		cout << "The Binary AI has found it's target! The number " << secretNumber << " and took " << binarytries + 1 << " tries\n\n";
		cout << "The Random AI has found it's target! The number " << secretNumber << " and took " << randomtries + 1 << " tries\n\n";
		cout << "The Linear AI has found it's target! The number " << secretNumber << " and took " << lineartries + 1 << " tries\n\n";
		cout << "The player with the less amount of guesses used is the winner\n\n";
	} while (playerNumber, binaryNumber, randomNumber, linearNumber != secretNumber);


	//this will pause the system so you can see the printed info
	system("pause");
}

//welcome thread
void welcomeUser()
{
	//welcomes the user to the thread
	// this_thread::sleep_for(chrono::seconds(3));
	cout << "Welcome to the multithreads random question part of the arcade " << userName << "." << endl;
}

//math problem thread
void mathProblem()
{
	//asks the player a question
	// this_thread::sleep_for(chrono::seconds(3));
	cout << "What is the answer to 12 * 12?" << endl;
	cin >> a;
	if (a < 143) {
		cout << "That is a wrong anser." << endl;
	}
	else if (a > 145) {
		cout << "That is a wrong anser." << endl;
	}
	else if (a == 144)
	{
		cout << "That is correct." << endl;
	}
}

//year thread
void yearAsk()
{
	//asks the player the year
	// this_thread::sleep_for(chrono::seconds(3));
	cout << "Waht is the year this program was made?" << endl;
	cin >> b;
	if (b == 2018)
	{
		cout << "That is correct." << endl;
	}
	else if (b < 2017)
	{
		cout << "That is incorrect." << endl;
	}
	else if (b > 2019)
	{
		cout << "That is incorrect." << endl;
	}
}

//goobye thread
void goodByeUser()
{
	//thanks the user for going through the threads
	// this_thread::sleep_for(chrono::seconds(3));
	cout << "This is the end of the threads." << endl;
	cout << "Goobye " << userName << endl;
}

//multithread void
void multithreadProblems()
{
	//int to keep track of threads
	int i = 0;

	//number of threads
	thread threads[10];
	//joins the thread welcoming the player to the thread void
	if (i = 0)
	{
		++i;
		thread welcome(welcomeUser);
		welcome.join();
	}
	//joins the thead with the math problem
	if (i = 1)
	{
		++i;
		thread mp(mathProblem);
		mp.join();
	}
	//joins the thread with the year question
	if (i = 2)
	{
		++i;
		thread ya(yearAsk);
		ya.join();
	}
	//says goodbye to the user after they have finished the threads
	if (i = 3)
	{
		++i;
		thread gbu(goodByeUser);
		gbu.join();
	}
	//pauses system so you can read the prit out
	system("Pause");
}

//sets up the template class for use in the future
template <class Template>
class OnePair {
	//sets the ints x,z public
public:
	Template x, z;
	OnePair(Template one, Template two) {
		x = one; z = two;
	}
	//calls the template voids of the following
	Template addNumbers();
	Template subtractNumbers();
	Template multiplyNumbers();
	Template divideNumbers();
};
//sets up a template for add numbers
template <class Template>
Template OnePair<Template>::addNumbers() {
	return x + z;
}
//sets up a template for subtraction
template <class Template>
Template OnePair<Template>::subtractNumbers() {
	return x - z;
}
//sets up a template for multiplication
template <class Template>
Template OnePair<Template>::multiplyNumbers() {
	return x * z;
}
//sets up a template for division
template <class Template>
Template OnePair<Template>::divideNumbers() {
	return x / z;
}
//template void
void templateVoid() {
	int t;
	for (int t = 0; t < 1; t++) 
	{
		//introduces the user to what they will be doing with predecided numbers
		cout << "Let's look at an example of what you will be doing in this section of the program\n";
		OnePair <int> exampleIntPair(6, 9);
		OnePair <double> exampleDoublePair(6.6, 9.9);
		//displays the predecided numbers for the user
		cout << exampleIntPair.x << " " << exampleIntPair.z << endl;
		cout << exampleDoublePair.x << " " << exampleDoublePair.z << endl;
		//runs both sets of numbers through the template addon voids
		cout << exampleIntPair.addNumbers() << ", ";
		cout << exampleIntPair.subtractNumbers() << ", ";
		cout << exampleIntPair.multiplyNumbers() << ", ";
		cout << exampleIntPair.divideNumbers() << endl;
		cout << exampleDoublePair.addNumbers() << ", ";
		cout << exampleDoublePair.subtractNumbers() << ", ";
		cout << exampleDoublePair.multiplyNumbers() << ", ";
		cout << exampleDoublePair.divideNumbers() << endl;
		t = t + 1;
	}
	if (t = 1)
	{
		//tells the player they will be trying next and invites them it input 4 numbers
		cout << "Now try it yourself\n";
		cout << "Please enter a number\n";
		cin >> numberOne;
		cout << "Please enter another number\n";
		cin >> numberTwo;
		cout << "Please enter a number of ten or higher\n";
		cin >> numberThree;
		cout << "Please enter another number of ten or higher\n";
		cin >> numberFour;
		//then tells them they will be put through a similar template as the premade numbers
		cout << "Now we will put the numbers through a template along with a premade pair of numbers.\n";
		cout << "Have fun looking at the responses\n";
		//gets the numbers for the template problemsd
		OnePair <int> intPair(numberOne, numberTwo);
		OnePair <int> anotherIntPair(numberThree, numberFour);
		//displays what the individual numbers are
		cout << intPair.x << " " << intPair.z << endl;
		cout << anotherIntPair.x << " " << anotherIntPair.z << endl;
		//puts both sets of numbers through the added on math template voids
		cout << intPair.addNumbers() << ", ";
		cout << intPair.subtractNumbers() << ", ";
		cout << intPair.multiplyNumbers() << ", ";
		cout << intPair.divideNumbers() << endl;
		cout << anotherIntPair.addNumbers() << ", ";
		cout << anotherIntPair.subtractNumbers() << ", ";
		cout << anotherIntPair.multiplyNumbers() << ", ";
		cout << anotherIntPair.divideNumbers() << ", ";
		t = t + 1;
	}
	if (t = 2) 
	{
		//thanks the user for participating and invites them to return to the main menu to use some of the other voids
		cout << "Thank you for your participation. Please head back to the main menu in order to \n";
		cout << "do some of the other activities for you in this program\n";
		//this will pause the system so you can see the printed info
		system("pause");
	}
}

void mainMenu() 
{
	//name of game and welcome the user
	cout << "Welcome to the Arcade of mystery and randomness..." << endl;

	//layout the background/setting for the user
	cout << "You will have multiple types of games and activities in order to keep you busy.\n";
	cout << "You may do the options multiple times or move from one option to another after each.\n";
	cout << userName << "Please pick an option of what activity you want to do first." << endl;

//calling a function to display the list of user commands
DisplayUserCommands();
//get's the user's choice and does something based on it
cout << "Please enter a number: " << endl;
cin >> number;
//does something based on the number the user picks
switch (number)
{
	//clears the system of outputs and then loads a void based on the number picked
case 1:
	system("CLS");
	characterMaker();
	break;
case 2:
	system("CLS");
	multithreadProblems();
	break;
case 3:
	system("CLS");
	templateVoid();
	break;
case 4:
	system("CLS");
	randomNumberFinder();
	break;
case 5:
	system("CLS");
	exit(0);
	break;
default:
	cout << "You chose an unavailable option. Program will close soon." << endl;
	break;
}

system("Pause");

}