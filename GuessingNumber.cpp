#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int Guess(int);
int round=0;

int main() {
	
	int num, input;

	srand(time(NULL));
	num = rand() % 9+1;  // Random keep at variable >> num

	cout << "###Welcome to guessing number game###" << endl;
	cout << "Secret number has been chosen" << "\n"  << num << endl;
	
	round = Guess(num);

	cout << "Congratulations!" << endl;
	cout << "The seret number is " << num << endl;
	cout << "You made " << round << " guesses" << endl << endl;
	
	system("pause");
	return 0;
}

int Guess(int num) {
	int input = -1, round = 1;
	while (input != num) {
		cout << "Guess the number (1 to 10) : ";
		cin >> input;

		if (input == num) {
			break;
		} else if (input > num) {
			cout << "The secret number is higher" << endl;
		} else if (input < num) {
			cout << "The secret number is lower" << endl;
		}
		round++;
	}
	return round;
}