#include <iostream> //libraries
#include <cmath>
#include <iomanip>
int main() {
	//declare variables
	double height;
	double radius;
	double volume;
	const double pi = 3.14159;
	//prompt user for input
	std::cout << "Enter the height of the cylinder: ";
	std::cin >> height;
	std::cout << "Enter the radius of the cylinder: ";
	std::cin >> radius;
	//calculate volume
	volume = pi * pow(radius, 2) * height;
	//display volume
	std::cout << "The volume of the cylinder is: " << std::setprecision(2) << std::fixed << volume << std::endl;
	//return 0
	return 0;
}