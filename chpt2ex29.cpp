/*
 example 30 of college coding textbook

 A contractor orders, say, 30 cubic yards of premixed concrete to construct a patio that is to be say, four inches thick. The length of the
 patio is to be twice the width. Write a program that prompts the user so specify the amount of premixed concrete in cubic yards, the
 thickness of the patio in inches, and the ratio of length and width.

 The program outputs the length and width of the patio in feet.
 1 yard cubed = 3^3 = 27 cubic feet.

 */

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //variable declaration 
    double cubicYards, ratio, thickness;


    //Prompt user
    cout << "Welcome" << endl << endl;
    cout << "This program will output the length and width of a concrete Patio given the volume of concrete,"<<endl;
    cout << "the thickness of the patio in inches, and the ratio of length to width." << endl << endl << endl;
    
    //get numbers from user
    cout << "Please enter the volume of concrete to be purchased in yards: ";
    cin >> cubicYards;

    cout << "Please enter the thickness of the Patio in inches: ";
    cin >> thickness;

    cout << "Please enter the ratio of the width to length as two numbers separated by a comma: ";
    cin >> ratio;

    //calculation
    //what needs to happen is we need to make V be on the same scale as a,b,etc (inches)
    cubicYards *= 27;
    cubicYards *= 12;


    //v = a*b*c
    //width = sqrt(volume/ (thickness * ratio))
    //length = ratio * width
    //lol using more variables, why tho?
    cubicYards = sqrt(cubicYards / (thickness * ratio));
    thickness = ratio * cubicYards;

    
    
    //output results
    cout << "The length is: " << thickness << endl;
    cout << "The width is: " << cubicYards << endl;

    //exit
    return 0;
}
