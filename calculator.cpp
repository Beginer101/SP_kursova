#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	float x, y;
	const float a = 0.1;

	cout << "input x" << endl;
	cin >> x;

	if (x > 0.5)
	{
		y = pow(x + 2, 2) * pow(x - 1, 3) + sin(a * M_PI);
		cout << "y =" << y << endl;
	}

	else {
		y = pow(x, 3) + 6*pow(x, 2) - 3;
		cout << "y =" << y << endl;
		cout << "y = pow(x, 3) + 6 *pow(x, 2) - 3"  << endl;
	}


	return 0;
}