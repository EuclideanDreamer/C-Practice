#include <iostream>
#include <iomanip>



int main() {
	char c; //letter to be used for stuff
	double a1, a2, a3, a4, a5, bodyweight, wristFull, wristNavel, hip, forearm; //math values
	std::cout << std::fixed << std::setprecision(2); //set decimal places

	std::cout << "Please enter m for male or f for female: ";
	std::cin >> c;
	std::cout << std::endl;

	if (c == 'f' || c == 'F') {
		//data entry
		std::cout << "Please enter body weight: ";
		std::cin >> bodyweight;
		std::cout << std::endl;

		std::cout << "Please enter wrist measurement at fullest point: ";
		std::cin >> wristFull;
		std::cout << std::endl;

		std::cout << "Please enter wrist measurement at navel: ";
		std::cin >> wristNavel;
		std::cout << std::endl;

		std::cout << "Please enter hip measurement at fullest point: ";
		std::cin >> hip;
		std::cout << std::endl;

		std::cout << "Please enter forearm measurement at fullest point: ";
		std::cin >> forearm;
		std::cout << std::endl;
		//math


		a1 = (bodyweight * 0.732) + 8.987;
		a2 = wristFull / 3.140;
		a3 = wristNavel * 0.157;
		a4 = hip * 0.249;
		a5 = forearm * 0.434;


		//a5 here = B
		a5 = a1 + a2 - a3 - a4 + a5;

		//a4 here = bodyFat
		a4 = bodyweight - a5;

		//a3 here = body fat %
		a3 = a4 * (100 / bodyweight);


		std::cout << "Body fat % is: " << a3;

	}

	else if (c == 'm' || c == 'M') {
		std::cout << "Please enter body weight: ";
		std::cin >> bodyweight;
		std::cout << std::endl;

		std::cout << "Please enter wrist measurement: ";
		std::cin >> wristFull;
		std::cout << std::endl;

		//math time
		a1 = (bodyweight * 1.082) + 94.42;

		a2 = wristFull * 4.15;

		//a3 = b here
		a3 = a1 - a2;

		//a4 = body fat here
		a4 = bodyweight = a3;

		//a5 = body fat %
		a5 = a4 * (100 / bodyweight);

		//cout time
		std::cout << "Body fat % is: " << a5;

	}
	else
	{
		std::cout << "input fail";
	}
	return 0;
}