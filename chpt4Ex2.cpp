#include <iostream>
#include <array>
#include <algorithm>

int main() {
	std::array<double, 3> s = { 0,0,0 };

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Enter a number x: ";
		std::cin >> s[i];
		std::cout << std::endl;
	}
	
	std::sort(s.begin(), s.end());

	for (int i = 0; i < 3; i++) {
		std::cout << s[i];
	}

	return 0;
} 

