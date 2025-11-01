#include "Equation.h"
#include "EquationIO.h"

#include <iostream>

using namespace std;

void SolutionPrint(int n, double x1, double x2, double x3, double x4)
{
	switch (n){
	case Nosol:
		cout << "The equation has no solution." << endl;
		break;
	case Undetermined:  
		cout << "The equation has infinite solutions." <<endl;
		break;
	case 1:
		cout << "The equation has one solution: x = " << x1 << endl;
		break;
	case 2:
		cout << "The equation has two solutions: x1 = " << x1 << ", x2 = " << x2 << endl;
		break;
	case 3:
		cout << "The equation has three solutions: x1 = " << x1 << ", x2 = " << x2 << ", x3 = " << x3 << endl;
		break;
	case 4:
		cout << "The equation has four solutions: x1 = " << x1 << ", x2 = " << x2 << ", x3 = " << x3 << ", x4 = " << x4 << endl;
		break;
	default:
		cout << "Invalid number of solutions." << endl;
		break;
	}
}

void EquaDisplay(double a, double b)
{
	cout << "The equation is: " << a << "x + " << b << " = 0" << endl;
}
void EquaDisplay(double a, double b, double c, int deg)
{
	cout << "The equation is: " << a << "x^" << deg << " + "<< b << "x" << "^" << deg / 2 << " + " << c << " = 0" << endl;
}
void EquationInput(double& a, double& b)
{
	cout << "Enter coefficients a and b: ";
	cin >> a >> b;
}
void EquationInput(double& a, double& b, double& c)
{
	cout << "Enter coefficients a, b and c: ";
	cin >> a >> b >> c;
}
