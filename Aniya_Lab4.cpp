// Aniya_Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
// Print out the menu of choices for the user to select from
void printMenu(int& choice) {
	cout << "Please select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;

	cout << "Your Selection: ";
}


void factorial(int& A) {
	// I recommend writing your factorial code here
	int B = 1;
	//B = A * (--A);

	cout << "Factorial: " << endl;
	cout << "Enter a number: ";
	cin >> A;
	int i= 1;

	if (A < 0) {
		cout << "Please enter a POSITIVE number :)...: ";
		cin >> A;
	}

	else if (A >= 0) {
		// cout << A << "=" << endl;


		while ( i <= A) {
			//cout << A << "!" << " = ";

			//cout << A << "*" << endl;
			B =B * i;
			i++;
			
			
		}
		cout << B;
	}
}
void arithmetic() {
	// I recommend writing your arithmetic series code here
}
void geometric() {
	// I recommend writing your geometric series code here
}
int main() {
	int choice;
	char again;
	int A;

	do {
		printMenu(choice);
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial(A);
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
