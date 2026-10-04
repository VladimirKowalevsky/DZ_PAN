#include <iostream>
using namespace std;

double drag(double vl, double V, double S, double CD) {
	return 0.5 * vl * V * V * S * CD;
}
int main() {
	double vl, V, S, CD;
	cout << "vl V S CD: ";
	cin >> vl >> V >> S >> CD;

	cout << "D = " << drag(vl, V, S, CD) << endl;
}
