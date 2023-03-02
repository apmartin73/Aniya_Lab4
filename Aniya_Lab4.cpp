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
	int B = 1;
	int i = 1;

	cout << "Factorial: " << endl;
	cout << "Enter a number: ";
	cin >> A;

	if (A < 0) {
		cout << "Please enter a POSITIVE number :)...: ";
		cin >> A;
	}

	else if (A >= 0) {
		cout << A << "! = ";
		
		for (int i = 1; i <= A; i++) {

			cout << " * " << i ;
			B *= i;
			
		}

		cout << " = " << B << endl;
	}
}
void arithmetic(int& s, int& a, int& e) {
	int C= 1;

	cout << "Arithmetic Series: " << endl;
	cout << "Enter a number to start at: ";
	cin >> s;
	cout << "Enter a number to add or subtract each time: ";
	cin >> a;
	cout << "Enter the number of elements in the series: ";
	cin >> e;

	if (e < 0) {
		cout << "Please enter a POSITIVE amount of elements!...: ";
		cin >> e;
	}

	else if (e >= 0) {

		
			C = s;
			cout << s;
			for (int i = 1; i < e; i++) {

				
				s  += a;

				C += s;
				cout <<  " + " << s ;
				
			}

			cout << " = " << C << endl;

	}
}
void geometric(int& s, int& m, int& e) {
	int D = 1;

	cout << "Geometric Series: " << endl;
	cout << "Enter a number to start at: ";
	cin >> s;
	cout << "Enter a number to multiply by each time: ";
	cin >> m;
	cout << "Enter the number of elements in the series: ";
	cin >> e;

	if (e < 0) {
		cout << "Please enter a POSITIVE amount of elements!...: ";
		cin >> e;
	}

	else if (e >= 0) {


		D = s;
		cout << s;
		for (int i = 1; i < e; i++) {


			s *= m;

			D += s;
			cout << " + " << s;

		}

		cout << " = " << D << endl;

	}
}
int main() {
	int choice;
	char again;
	int A;
	int s;
	int a;
	int e;
	int m;

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
			arithmetic(s, a, e);
		}
		else if (choice == 3) {
			geometric(s, m, e);
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
