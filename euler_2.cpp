#include <iostream>
using namespace std;

int main() {
	long previous = 1;
	long current = 2;
	int sum = 0;

	while(current <= 4000000) {
		if (current % 2 == 0) {
			sum += current;
		}

		current += previous;
		previous = current - previous;
	}

	cout << sum << '\n';
}
