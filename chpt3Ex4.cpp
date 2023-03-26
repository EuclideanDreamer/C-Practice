#include <iostream>
#include <iomanip>
int main() {
	//make variables  
	double cost, area, bagSize;
	//set decimal digits
	std::cout << std::fixed << std::setprecision(2);

	std::cout << "Enter the amount of fertilizer, in pounds, in one bag: ";
	std::cin >> bagSize;
	std::cout << std::endl;
	std::cout << "Enter the cost of the " << bagSize << " pound bag: ";
	std::cin >> cost;
	std::cout << std::endl;
	std::cout << "Enter the Area in square feet, that can be fertilized by one bag: ";
	std::cin >> area;

	//results 
	std::cout << "The cost per pound is : $" << cost / bagSize << std::endl;
	std::cout << "The cost per square foot is: $" << cost / area << std:: endl;
	return 0;
}