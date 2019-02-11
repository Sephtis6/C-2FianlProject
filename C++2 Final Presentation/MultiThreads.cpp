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
//namespaces used
using namespace std;
std::mutex mtx;

//variables used
string userName;
int a;
int b;

//fourth thread
void welcomeUser()
{
	// this_thread::sleep_for(chrono::seconds(3));
	cout << "Welcome to the multithreads random question part of the arcade " << userName << "." << endl;
}

//fifth thread
void mathProblem()
{
	// this_thread::sleep_for(chrono::seconds(3));
	cout << "What is the answer to 12 * 12?" << endl;
	cin >> a;
	if (a < 143 | a > 145) {
		cout << "That is a wrong anser." << endl;
	}
	else if (a == 144)
	{
		cout << "That is correct." << endl;
	}
}

//seventh thread
void yearAsk()
{
	// this_thread::sleep_for(chrono::seconds(3));
	cout << "Waht is the year this program was made?" << endl;
	cin >> b;
	if (b == 2018)
	{
		cout << "That is correct." << endl;
	}
	else if (b < 2017 | b > 2019)
	{
		cout << "That is incorrect." << endl;
	}
}

//tenth thread
void goodByeUser()
{
	// this_thread::sleep_for(chrono::seconds(3));
	cout << "This is the end of the threads." << endl;
	cout << "Goobye " << userName << endl;
}

//main thread
void multithreadProblems()
{
	int i = 0;

	//number of threads
	thread threads[10];
	// spawn 10 threads:
	//first thread
	//for (auto& th : threads) th.join();
	//fourth thread
	if (i = 0)
	{
		++i;
		thread welcome(welcomeUser);
		welcome.join();
	}
	//fifth thread
	if (i = 1)
	{
		++i;
		thread mt(mathProblem);
		mt.join();
	}
	//seventh thread
	if (i = 2)
	{
		++i;
		thread ya(yearAsk);
		ya.join();
	}
	//tenth thread
	if (i = 3)
	{
		++i;
		thread gbu(goodByeUser);
		gbu.join();
	}

	//pauses system so you can read the prit out
	system("Pause");
}