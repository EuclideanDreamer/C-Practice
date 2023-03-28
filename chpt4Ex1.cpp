#include <iostream>
int main() {
	double x;
	std::cout << "Enter a number: ";
	std::cin >> x;
	std::cout;
	if (x > 0) {
		std::cout << "Number is positive";
	}
	if (x < 0) {
		std::cout << "Number is negative";
	}
	if (x == 0) {
		std::cout << "Number is 0";
	}
} 