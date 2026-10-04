#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "n = ";
    cin >> n;

    vector<double> V(n), rho(n);
    for (int i = 0; i < n; i++) {
        cout << "V[" << i << "] rho[" << i << "]: ";
        cin >> V[i] >> rho[i];
    }

    const double S = 20.0, CL = 1.0;

    cout << "Шаг\tСкорость\tПлотность\tL\n";
    for (int i = 0; i < n; i++) {
        double L = 0.5 * rho[i] * V[i] * V[i] * S * CL;
        cout << i << "\t" << V[i] << "\t\t" << rho[i] << "\t\t" << L << endl;
    }
}