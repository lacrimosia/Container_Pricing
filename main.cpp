/*
	Shatilla Prayer
	Assignment #5
	CS 202-1003
	3/1/2017
*/

#include <iostream>
#include "circleCylinder.h"
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

const double cubic = 28.31;  // cubic feet conversion

int main()
{
	// set everything to zero before calculations
	double radius, height, shipping, paint, total = 0; 

	// ask the user to enter the radius and height
	cout << "Enter the radius of the base of the cylinder and height (in feet) ";
	cout << endl;
	cin >> radius >> height;  // gets the radius and height from user

	// while input is not a double, keep asking user to enter values
	while(!cin)
	{
		cin.clear();   // clears and ignores values
		cin.ignore(100, '\n');
		// reprompt the user to try again 
		cout << "Enter the radius of the base of the cylinder and height (in feet) ";
		cout << endl;
		cin >> radius >> height;	
	}

	// ask user to enter shipping and paint costs
	cout << "Enter shipping cost per liter and paint cost per square foot ";
	cout << endl;
	cin >> shipping >> paint;  // get shipping and paint cost from user

	// if user enters wrong input, keep prompting until correct
	while(!cin)
	{
		cin.clear(); // clears and ignores values
		cin.ignore(100, '\n');
		// reprompt the user to try again
		cout << "Enter shipping cost per liter and paint cost per square foot ";
		cout << endl;
		cin >> shipping >> paint;	
	}

	// after getting input from user
	// I pass in radius and height into the cylinder object
	// This will calculate the area and volume from the cylinder class
	 cylinder item(radius, height);

	 // set decimals to two points
	 cout << fixed << setprecision(2) << endl;

	 // calculate shipping price, paint cost, and the total
	 double shippingPrice = item.volume() * shipping * cubic;
	 double paintCost = paint * item.area();
	 total = shippingPrice + paintCost;

	 // output the results formatted
	 cout << left << "Price to ship container" << setw(20) << setfill('.')  << right << "$" << setw(15) << setfill(' ') <<  shippingPrice << endl;
	 cout << left << "Price to paint container" << setw(19) << setfill('.') << right << "$" << setw(15) << setfill(' ') <<  paintCost << endl;
	 cout << "Total Cost" << setw(33) << setfill('.') << right << "$" << setw(15) << setfill(' ') <<  total << endl;
	// end the program
	return 0;
}
