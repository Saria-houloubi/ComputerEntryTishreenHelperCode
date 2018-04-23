#include <iostream>

using namespace std;

//Our main entry point 
int main() {

	//The value to user for calc
	//Decalar our variables
	int FirstValue;
	int SecondValue;
	//The result of any operation will be stored here
	int result;
	//A flag which shows if the inputed operation is supported 
	bool isSupportedOperation = true;
	char operation;

	//Print welcome message
	cout << "Welcome to our super calc\n";
	//Loop and repate the program until user ends it
	while (true) {
		//Enters the values
		cout << "Enter the first Value : ";
		cin >> FirstValue;
		cout << "Enter the second Value : ";
		cin >> SecondValue;
		cout << "Enter the wanted operation ( + | - | * | / ) : ";
		cin >> operation;

		//Find the correct operation
		if (operation == '+')
			result = (FirstValue + SecondValue);
		else if (operation == '-')
			result = (FirstValue - SecondValue);
		else if (operation == '*')
			result = (FirstValue * SecondValue);
		else if (operation == '/')
			result = (FirstValue / SecondValue);
		else {
			isSupportedOperation = false;
		}
		//Print the result
		if (isSupportedOperation)
			cout << "FirstValue " << operation << " SecondValue = " << result << "\n";
		else
			cout << "Not supported operaiton operation : " << operation << endl;

		char calculateMore = 'N';

		//Ask if the uuser want to continue
		cout << "do you want to continue (N/Y) ? " << endl;

		cin >> calculateMore;
		//if not break from the loop
		if (calculateMore == 'N')
			break;
	}

	cout << "Thank you for using my super calc" << endl;
	//Only used to pause the screen
	cin >> FirstValue;

	return 0;
}