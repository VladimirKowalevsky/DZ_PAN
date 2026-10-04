#include <iostream>
using namespace std;

int main() {
	double S, V, vl, CL;
	cout << "S V vl CL: ";
	cin >> S >> V >> vl >> CL;

	double L = 0.5 * vl * V * V * S * CL;
	cout << "L = " << L << endl;
}
