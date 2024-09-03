#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

double f(double x, vector<double> coeffs) {
	double value = 0;
	for (int i = 0, n = coeffs.size(); i < n; ++i)
		value += coeffs[i] * pow(x, n - 1 - i);
	return value;
}


double bisection_method(double a, double b, vector<double> coeffs){
	while (floor(a*pow(10, 7)) - floor(b*pow(10, 7)) != 0) {
		//if diff sign, update b; else, update a
		f(a, coeffs) * f(0.5*(a + b), coeffs) < 0 ? b = 0.5*(a + b) : a = 0.5*(a + b);
	}
	return floor((a*pow(10, 5) + 5) / 10) / 10000.0;
}


int main() {
	//due to time constraint, cases not considered: multiple roots.
	string line;
	while (getline(cin, line)) {
		vector<double> coeffs;

		//get vector from string
		line = line.substr(1);
		line = line.substr(0, line.length() - 1) + ",]";
		while (line[0] != ']') {
			int x = line.find(',');
			coeffs.push_back(atof((line.substr(0, x)).c_str()));
			line = line.substr(x + 1);
		}

		//find root using bisection method
		double x_min = -10e8;
		double x_max = 10e8;
		cout << bisection_method(x_min, x_max, coeffs) << endl;


	}
}
