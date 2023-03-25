#include <iostream> //libraries
#include <cmath>
#include <iomanip>
int main() {
	//declare variables
	double weight, height, bmi;
	//prompt user for weight
	std::cout << "Enter your weight in pounds: ";
	//read in weight
	std::cin >> weight;
	//prompt user for height
	std::cout << "Enter your height in inches: ";
	//read in height
	std::cin >> height;
	//calculate bmi
	bmi = (weight * 703) / pow(height, 2);
	//display bmi
	std::cout << "Your BMI is: " << std::setprecision(2) << std::fixed << bmi << std::endl;
	//if bmi is less than 18.5
	if (bmi < 18.5) {
		//display underweight
		std::cout << "You are underweight." << std::endl;
	}
	//else if bmi is greater than or equal to 18.5 and less than or equal to 25
	else if (bmi >= 18.5 && bmi <= 25) {
		//display optimal weight
		std::cout << "You are at optimal weight." << std::endl;
	}
	//else if bmi is greater than 25 and less than or equal to 30
	else if (bmi > 25 && bmi <= 30) {
		//display overweight
		std::cout << "You are overweight." << std::endl;
	}
	//else
	else {
		//display obese
		std::cout << "You are obese." << std::endl;
	}
	//return 0
	return 0;
}