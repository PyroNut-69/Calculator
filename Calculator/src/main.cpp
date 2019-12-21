/*
	<:Property of PyroNut-69:>
*/

#include <iostream>
//#include <windows.h>
#include <stdio.h>
#include <math.h>
#include "mathsFuncts.hpp"

using namespace std;

int main()
{
	while (true) {

		//variables that are needed to make dis work
		char blank;
		string option;

		Maths maths;
		logMaths logmaths;
		//declaring maths object

		cout << "(a) addition\n(s) subtraction\n(m) multiplication\n(d) division\n(p1) get a percentage from a fraction\n(p2) get percentage from a decimal\n(sqrt) to get the square root of a number\n(pow) to get the power of a number\n(at) to get the area of a triangle\n(x) to exit" << endl;
		cin >> option;
		if (option == "a")
		{
			//running addition function
			logmaths.logAddition(0, 0);
			//running stuff to restart 
			cout << "press (c) to continue doing mathematical operations (x) to exit" << endl;
			cin >> blank;
			if (blank == 'c')
			{
				system("CLS");
				continue;
			}
			else if (blank == 'x')
			{
				break;
			}
			else {
				break;
			}
		}
		else if (option == "s")
		{
			//running subtraction function
			logmaths.logSubtraction(0, 0);
			//running stuff to restart 
			cout << "press (c) to continue doing mathematical operations (x button) to exit" << endl;
			cin >> blank;
			if (blank == 'c')
			{
				system("CLS");
				continue;
			}
			else if (blank == 'x')
			{
				break;
			}
			else {
				break;
			}
		}
		else if (option == "m")
		{
			//running multiplication function
			logmaths.logMultiplacation(0, 0);
			//running stuff to restart 
			cout << "press (c) to continue doing mathematical operations (x) to exit" << endl;
			cin >> blank;
			if (blank == 'c')
			{
				system("CLS");
				continue;
			}
			else if (blank == 'x')
			{
				break;
			}
			else {
				break;
			}
		}
		else if (option == "d")
		{
			//running division function
			logmaths.logDivision(0, 0);
			//running stuff to restart 
			cout << "press (c) to continue doing mathematical operations (x) to exit" << endl;
			cin >> blank;
			if (blank == 'c')
			{
				system("CLS");
				continue;
			}
			else if (blank == 'x')
			{
				break;
			}
			else {
				break;
			}
		}
		else if (option == "p1")
		{
			//running fractionPercentage function
			logmaths.logFracionPercentage(0, 0);
			//running stuff to restart 
			cout << "press (c) to continue doing mathematical operations (x) to exit" << endl;
			cin >> blank;
			if (blank == 'c')
			{
				system("CLS");
				continue;
			}
			else if (blank == 'x')
			{
				break;
			}
			else {
				break;
			}
		}
		else if (option == "p2")
		{
			//running decimalPercentage function
			logmaths.logDecimalPercentage(0);
			//running stuff to restart 
			cout << "press (c) to continue doing mathematical operations (x) to exit" << endl;
			cin >> blank;
			if (blank == 'c')
			{
				system("CLS");
				continue;
			}
			else if (blank == 'x')
			{
				break;
			}
			else {
				break;
			}
		}
		else if (option == "sqrt")
		{
			//running multiplication function
			logmaths.logSqaureRoot(0);
			//running stuff to restart 
			cout << "press (c) to continue doing mathematical operations (x) to exit" << endl;
			cin >> blank;
			if (blank == 'c')
			{
				system("CLS");
				continue;
			}
			else if (blank == 'x')
			{
				break;
			}
			else {
				break;
			}
		}
		else if (option == "pow")
		{
			//running multiplication function
			logmaths.logPowerOf(0, 0);
			//running stuff to restart 
			cout << "press (c) to continue doing mathematical operations (x) to exit" << endl;
			cin >> blank;
			if (blank == 'c')
			{
				system("CLS");
				continue;
			}
			else if (blank == 'x')
			{
				break;
			}
			else {
				break;
			}
		}
		else if (option == "pow")
		{
			//running multiplication function
			logmaths.logPowerOf(0, 0);
			//running stuff to restart 
			cout << "press (c) to continue doing mathematical operations (x) to exit" << endl;
			cin >> blank;
			if (blank == 'c')
			{
				system("CLS");
				continue;
			}
			else if (blank == 'x')
			{
				break;
			}
			else {
				break;
			}
		}
		else if (option == "at")
		{
		//running multiplication function
		logmaths.logAreaTriangle(0, 0);
		//running stuff to restart 
		cout << "press (c) to continue doing mathematical operations (x) to exit" << endl;
		cin >> blank;
		if (blank == 'c')
		{
			system("CLS");
			continue;
		}
		else if (blank == 'x')
		{
			break;
		}
		else {
			break;
		}
		}
		else if (option == "x")
		{
			break;
		}
		else {
			//makes fun of you cos you are stupid
			cout << "no value known as " + option + " exists" << endl;
			cin.get();
		}
	}
}