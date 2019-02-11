#include <iostream>
#include "Character.h"
using namespace std;

int numberOne;
int numberTwo;
int numberThree;
int numberFour;

template <class Template>
class OnePair {
public:
	Template x, z;
	OnePair(Template one, Template two) {
		x = one; z = two;
	}

	Template addNumbers();
	Template subtractNumbers();
	Template multiplyNumbers();
	Template divideNumbers();
};

template <class Template>
T OnePair<Template>::addNumbers() {
	return x + z;
}

template <class Template>
T OnePair<Template>::subtractNumbers() {
	return x - z;
}

template <class Template>
T OnePair<Template>::multiplyNumbers() {
	return x * z;
}

template <class Template>
T OnePair<Template>::divideNumbers() {
	return x / z;
}

void templateVoid() {

	cout << "Let's look at an example of what you will be doing in this section of the program\n";
	OnePair <int> exampleIntPair(6, 9);
	OnePair <double> exampleDoublePair(6.6, 9.9);

	cout << exampleIntPair.x << " " << exampleIntPair.z << endl;
	cout << exampleDoublePair.x << " " << exampleDoublePair.z << endl;

	cout << exampleIntPair.addNumbers() << endl;
	cout << exampleIntPair.subtractNumbers() << endl;
	cout << exampleIntPair.multiplyNumbers() << endl;
	cout << exampleIntPair.divideNumbers() << endl;
	cout << exampleDoublePair.addNumbers() << endl;
	cout << exampleDoublePair.subtractNumbers() << endl;
	cout << exampleDoublePair.multiplyNumbers() << endl;
	cout << exampleDoublePair.divideNumbers() << endl;

	cout << "Now try it yourself\n";
	cout << "Please enter a number\n";
	cin >> numberOne;
	cout << "Please enter another number\n";
	cin >> numberTwo;
	cout << "Please enter a decimal number\n";
	cin >> numberThree;
	cout << "Please enter another decimal number\n";
	cin >> numberFour;

	cout << "Now we will put the numbers through a template along with a premade pair of numbers.\n";
	cout << "Have fun looking at the responses\n";

	OnePair <int> intPair(numberOne, numberTwo);
	OnePair <double> doublePair( numberThree, numberFour);

	cout << intPair.x << " " << intPair.z << endl;
	cout << doublePair.x << " " << doublePair.z << endl;

	cout << intPair.addNumbers() << endl;
	cout << intPair.subtractNumbers() << endl;
	cout << intPair.multiplyNumbers() << endl;
	cout << intPair.divideNumbers() << endl;
	cout << doublePair.addNumbers() << endl;
	cout << doublePair.subtractNumbers() << endl;
	cout << doublePair.multiplyNumbers() << endl;
	cout << doublePair.divideNumbers() << endl;
	cout << "Thank you for your participation. Please head back to the main menu in order to \n";
	cout << "do some of the other activities for you in this program\n";

	system("pause");
}