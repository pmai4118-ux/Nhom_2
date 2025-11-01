#include "Equation.h"
#include "EquationIO.h"

#include <iostream>

using namespace std;

int main()
{
	while (1)
	{
		cout << "Enter degree of coefficients (1/2/4): ";
		int deg;
		cin >> deg;
		if (deg == 2)
		{
			double a, b, c, x1, x2;
			int sn;
			EquationInput(a, b, c);
			sn = EquaDeg2(a, b, c, x1, x2);
			EquaDisplay(a, b, c, 2);
			SolutionPrint(sn, x1, x2);
		}
		else if (deg == 1)
		{
			double a, b, x;
			int sn;
			EquationInput(a, b);
			sn = EquaDeg1(a, b, x);
			EquaDisplay(a, b);
			SolutionPrint(sn, x);
		}
		else if (deg == 4)
		{
			double a, b, c, x1, x2, x3, x4;
			int sn;
			EquationInput(a, b, c);
			sn = EquaDeg4(a, b, c, x1, x2, x3, x4);
			EquaDisplay(a, b, c, 4);
			SolutionPrint(sn, x1, x2, x3, x4);
		}
	}
	return 0;
}