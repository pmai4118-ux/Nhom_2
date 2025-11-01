#include "Equation.h"
#include <math.h>
int EquaDeg1(double a, double b, double& x)
{
	if (a == 0){
		if (b == 0)
			return Undetermined;
		return Nosol;
	}
	x = -b / a;
	return 1; // One solution
}
int EquaDeg2(double a, double b, double c, double& x1, double& x2)
{
	if (a == 0)
		return EquaDeg1(b, c, x1);
	double delta = b * b - 4 * a * c;
	if (delta < 0)
		return Nosol;
	if (delta == 0)
	{
		x1 = x2 = -b / (2 * a);
		return 1;
	}
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);
	return 2;
}
int EquaDeg4(double a, double b, double c, double& x1, double& x2, double& x3, double& x4)
{
	int nSolution;
	double y1, y2;
	int nSol1 = EquaDeg2(1, b, c, y1, y2);
	switch (nSol1)
	{
	case Nosol: case Undetermined: // No solution
		nSolution = nSol1;
		break;
	case 1: // One solution
		nSolution = EquaDeg2(1, 0, -y1, x1, x2);
		break;
	case 2: // Two solutions
		int nSol2 = EquaDeg2(1, 0, -y1, x1, x2);
		switch (nSol2)
		{
			case Nosol: nSolution = EquaDeg2(1, 0, -y2, x1, x2); break;
			case 1: nSolution = 1 + EquaDeg2(1, 0, -y2, x2, x3); break;
			case 2: nSolution = 2 + EquaDeg2(1, 0, -y2, x3, x4); break;
		}
	}
	return nSolution;
}
