#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double g(const double x);
int main()
{
	double zp, zk, v;
	int n;
	cout << "zp = "; cin >> zp;
	cout << "zk = "; cin >> zk;
	cout << "n = "; cin >> n;
	cout << fixed;
	cout << "-------------------------" << endl;
	cout << "| " << setw(15) << "Variant13" <<  setw(8) << " |" << endl;
	cout << "-------------------------" << endl;
	cout << "| " << setw(9) << "z" << " |"
		<< setw(10) << "Value" << " |"
		<< endl;
	cout << "-------------------------" << endl;
	double dz = (zk - zp) / n;
	double z = zp;
	while (z <= zk)
	{
		v = g(2 * z) + pow(g(2 * z + pow(z, 2)), 2) + g(1.5);
		cout << "| "<< setw(9) << setprecision(5) << z << " | "
		<< setw(9) << setprecision(5) << v << " |"<< endl;
		z += dz;
	}
	cout << "-------------------------" << endl;
}
double g(const double x)
{
	if (abs(x) >= 1)
		return sin(x) / (cos(x) + 2);
	else
	{
		double S = 0;
		int N = 0;
		double a = 1;
		S = a;
		do
		{
			N++;
			double R = pow(x, 2) / N;
			a *= R;
			S += a;
		} while (N < 6);
		return S;
	}
}
