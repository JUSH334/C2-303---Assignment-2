#include <iostream>
#include <string>

using namespace std;

//function implementation

void displayMenu() {
	//displays options to user
	cout << endl;
	cout << "Single Linked List Methods:" << endl;
	cout << "-------------------------" << endl;
	cout << "1. Append to Front" << endl;
	cout << "2. Append to Back" << endl;
	cout << "3. Delete Front Number" << endl;
	cout << "4. Delete Back Number" << endl;
	cout << "5. Check Front Number" << endl;
	cout << "6. Check Back Number" << endl;
	cout << "7. Check Empty" << endl;
	cout << "8. Insert Number" << endl;
	cout << "9. Remove Number" << endl;
	cout << "10. Find Number" << endl;
	cout << "11. Quit" << endl;
}

int userMenuOption() {
	//processes a number input from user
	int userChoice;
	cout << endl;
	do {
		cout << "Enter a number option: ";
		cin >> userChoice;
		if (userChoice != 1 && userChoice != 2 && userChoice != 3 && userChoice != 4 && userChoice != 5 && userChoice != 6
			&& userChoice != 7 && userChoice != 8 && userChoice != 9 && userChoice != 10 && userChoice != 11) {
			cout << "Please enter a valid number option." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else {
			return userChoice;
		}
	} while (userChoice != 1 && userChoice != 2 && userChoice != 3 && userChoice != 4 && userChoice != 5 && userChoice != 6
		&& userChoice != 7 && userChoice != 8 && userChoice != 9 && userChoice != 10 && userChoice != 11);
}

