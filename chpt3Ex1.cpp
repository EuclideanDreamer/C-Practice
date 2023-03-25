#include <iostream> //libraries
#include <fstream>
#include <string>
#include <iomanip>
int main() {
	std::ofstream outFile;//creating file pointers
	std::ifstream inFile;
	//
	inFile.open("inData.txt");//assign fileptr to name of file
	outFile.open("outData.txt");
	//
	outFile << std::fixed << std::setprecision(2); // set decimal place to show two places
	//
	std::string fName, lName, dptName;//make the variabes
	double monthlyGrossSalary, bonusPer, taxPer, distance, travelTime, cupsSold, cupCost;

	inFile >> fName >> lName >> dptName;//get them from file
	inFile >> monthlyGrossSalary >> bonusPer >> taxPer;
	inFile >> distance >> travelTime;//woah this is not safe
	inFile >> cupsSold >> cupCost;
	//
	// closing infile
	inFile.close();
	//
	// show name
	outFile << "Name: " << fName << " " << lName << ", Department: " << dptName << std::endl;
	// show salary info
	outFile << "Monthly Gross Salary: $" << monthlyGrossSalary << ", Monthly Bonus: " << bonusPer << "%, Taxes: " << taxPer << "%" << std::endl;
	//
	//math time
	monthlyGrossSalary = monthlyGrossSalary + (monthlyGrossSalary * (bonusPer / 100)); // add bonus
	monthlyGrossSalary = monthlyGrossSalary - (monthlyGrossSalary * (taxPer / 100)); //take taxes (theft)
	// show results
	outFile << "Paycheck: $" << monthlyGrossSalary <<  std::endl << std::endl;

	//
	//now the distance
	outFile << "Distance Traveled: " << distance << " miles, Traveling Time: " << travelTime << std::endl;
	//
	//math time
	distance = distance / travelTime;
	// show results
	outFile << "Average Speed :" << distance << "miles per hour" << std::endl << std::endl;
	//
	//now the co-fe-fe
	outFile << "Number of Coffee Cups Sold: " << cupsSold << ", Cost: $" << cupCost << " per cup" << std::endl;
	//math
	cupCost = cupCost * cupsSold;
	outFile << "Sales Amount = $" << cupCost;

	//closing outFile
	outFile.close();

	//return 0
	return 0;
}