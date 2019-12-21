#include "mathsFuncts.hpp"
#include <iostream>
//#include <windows.h>
#include <stdio.h>
#include <math.h>

using namespace std;
Maths maths;

double Maths::addition(double a, double b)
{
	system("CLS");
	cout << "enter number 1" << endl;
	cin >> a;
	cout << "enter number 2" << endl;
	cin >> b;
	cout << "Equals: ";
	return a + b;
}


double Maths::subtraction(double s, double s1)
{
	system("CLS");
	cout << "enter number 1" << endl;
	cin >> s;
	cout << "enter number 2" << endl;
	cin >> s1;
	cout << "Equals: ";
	return s - s1;
}

double Maths::multiplacation(double m, double m1) {
	system("CLS");
	cout << "enter number 1" << endl;
	cin >> m;
	cout << "enter number 2" << endl;
	cin >> m1;
	cout << "Equals: ";
	return m * m1;
}

double Maths::division(double d, double d1) {
	system("CLS");
	cout << "enter number 1" << endl;
	cin >> d;
	cout << "enter number 2" << endl;
	cin >> d1;
	cout << "Equals: ";
	return d / d1;
}

double Maths::fracionPercentage(double fp, double fp1) {
	system("CLS");
	cout << "enter top number" << endl;
	cin >> fp;
	cout << "enter bottom number" << endl;
	cin >> fp1;
	cout << "Equals: ";
	return fp / fp1 * 100;
}

double Maths::decimalPercentage(double dp) {
	system("CLS");
	cout << "enter decimal" << endl;
	cin >> dp;
	cout << "Equals: ";
	return dp * 100;
}

double Maths::sqaureRoot(double sq) {
	system("CLS");
	cout << "enter number: " << endl;
	cin >> sq;
	cout << "Equals ";
	return sqrt(sq);
}

double Maths::powerOf(double po1, double po2) {
	system("CLS");
	cout << "enter number you want the power of: " << endl;
	cin >> po1;
	cout << "enter number to power it by: " << endl;
	cin >> po2;
	cout << "Equals: ";
	return pow(po1, po2);
}

double Maths::areaTriangle(double base, double height) {
	system("CLS");
	cout << "enter the measurement of the base of your triangle: " << endl;
	cin >> base;
	cout << "enter the measurement of the height of your triangle: " << endl;
	cin >> height;
	cout << "The area is: ";
	return base * height / 2;
}

// LOG OUTPUT AND STORE IN VARIABEL
void logMaths::logAddition(double a, double b) {
	double addResult = maths.addition(a, b);
	cout << addResult << endl;
}

void logMaths::logSubtraction(double s, double s1) {
	double subResult = maths.subtraction(s, s1);
	cout << subResult << endl;
}

void logMaths::logMultiplacation(double m, double m1) {
	double multResult = maths.multiplacation(m, m1);
	cout << multResult << endl;
}

void logMaths::logDivision(double d, double d1) {
	double divResult = maths.division(d, d1);
	cout << divResult << endl;
}

void logMaths::logFracionPercentage(double fp, double fp1) {
	double frapResult = maths.fracionPercentage(fp, fp1);
	cout << frapResult;
	cout << "%" << endl;
}

void logMaths::logDecimalPercentage(double dp) {
	double decpResult = maths.decimalPercentage(dp);
	cout << decpResult;
	cout << "%" << endl;
}

void logMaths::logSqaureRoot(double sq) {
	double sqrResult = maths.sqaureRoot(sq);
	cout << sqrResult << endl;
}

void logMaths::logPowerOf(double po1, double po2) {
	double powResult = maths.powerOf(po1, po2);
	cout << powResult << endl;
}

void logMaths::logAreaTriangle(double base, double height) {
	double areaTriangleResult = maths.areaTriangle(base, height);
	cout << areaTriangleResult << endl;
}