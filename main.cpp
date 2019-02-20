#include <iostream>
using namespace std;

void printTitle(int n){
		cout << "You have guessed " << n << " number of times." << endl;
	
}
bool guess(int num, int cnt){
	int guess = 0;
	cout << "You have guessed " << cnt << " number of times." << endl;
	cout << "Make your guess: ";
	cin >> guess;
	
	if (guess != num) {
	 cout << "You guessed wrong" << endl;
	return true;
	} else {
		return false;
	}
}

int main() {
	bool failed = true;
	int count = 0;
	int number = 73;

	
while(failed) {
	failed = guess(number, count);
	count++;
	}
	cout << "you guessed correctly! ";
	cout << "you guessed " << count <<  " times!" << endl;

return 0;	
}
