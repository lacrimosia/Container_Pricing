#include "circleCylinder.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*----------------------------------------------------
Default Constructor for Circle Class
PARAMETERS: none
POSTCONDITION: sets to zero
----------------------------------------------------*/
circle::circle()
{
	radius = 0.0;
}

/*----------------------------------------------------
Constructor
PARAMETERS: double
POSTCONDITION: sets radius to the parameter r
----------------------------------------------------*/
circle::circle(double r)
{
	radius = r;
}

/*----------------------------------------------------
function: area()
PARAMETERS: none
POSTCONDITION: returns the area of a circle
----------------------------------------------------*/
double circle::area() const
{
	// pi * radius squared
	return PI * radius * radius;
}

/*----------------------------------------------------
DEFAULT CONSTRUCTOR: cylinder()
PARAMETERS: none
POSTCONDITION: set height to 0
----------------------------------------------------*/
cylinder::cylinder() 
{
	height = 0.0;
}

/*----------------------------------------------------
CONSTRUCTOR: cylinder(radius, height)
PARAMETERS: radius, height
POSTCONDITION: set radius and height to parameters
----------------------------------------------------*/
cylinder::cylinder(double r, double h) : circle(r)
{
	// circle::circle(r);
	height = h;
}

/*----------------------------------------------------
function: cylinder area()
PARAMETERS: none
POSTCONDITION: returns the area of a cylinder
----------------------------------------------------*/
double cylinder::area() const
{
	double radius = sqrt((circle::area()/PI));
	return 2 * PI * radius * height + 2 * circle::area();
}

/*----------------------------------------------------
function: cylinder volume()
PARAMETERS: none
POSTCONDITION: returns the volume of a cylinder
----------------------------------------------------*/
double cylinder::volume() const
{
	return circle::area() * height;
}


