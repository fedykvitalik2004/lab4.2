#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(10) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		A = 2 * abs(5 - x);

		if (x <= -1)
			B = exp(abs(2 + x));
		if (x > -1 && x < 1)
			B = sin(1.0 / (abs(2 + x))) * sin(1.0 / (abs(2 + x)));
		if (x >= 1)
			B = (cos(x) * cos(x)) / (1 + abs(sin(x)));
		y = A - B;
		cout << "|" << setw(10) << setprecision(3) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}
