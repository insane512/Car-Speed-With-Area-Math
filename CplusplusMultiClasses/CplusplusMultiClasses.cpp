// CplusplusMultiClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Cars.h"
#include "Area.h"
using namespace std;








Cars::Cars()
{
	cout << "The Car Object Is Created!" << endl;
}

int Cars::getSpeed()
{
	return speed;
}

void Cars::setSpeed(int newSpeed)
{

	speed = newSpeed;
}

void Cars::gas()
{
	
		setSpeed(speed + 1);
		cout << "Your New Speed Is: " << speed << "MPH" << endl;
}

void Cars::brake()
{
		setSpeed(speed - 1);
		cout << "Your New Speed Is: " << speed << "MPH" << endl;
}

Cars::~Cars()
{
	cout << "The Car Object Is Destroyed!" << endl;
}






int main()
{
	Cars buick;
	buick.setSpeed(0);
	buick.gas();
	buick.gas();
	buick.gas();
	buick.gas();
	buick.brake();
	buick.brake();
	buick.brake();
	buick.brake();

	cout << endl;
	Area myArea;
	myArea.setArea(5,5,5);
	myArea.getArea();
	myArea.setArea(15, 6, 12);
	myArea.getArea();

	return 0;
}


