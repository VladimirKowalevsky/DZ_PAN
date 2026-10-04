#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double g = 9.81, rho = 1.225, V = 100.0, S = 20.0;

    double m, CL, CD, Tmin, Tmax, dT, h;
    cout << "m CL CD Tmin Tmax dT h: ";
    cin >> m >> CL >> CD >> Tmin >> Tmax >> dT >> h;

    double L = 0.5 * rho * V * V * S * CL;
    double ay = (L - m * g) / m;

    double bestT = Tmin;
    double bestTime = 1e18;

    for (double T = Tmin; T <= Tmax + 1e-9; T += dT) {
        if (ay <= 0) continue;
        double t = sqrt(2 * h / ay);
        if (t < bestTime) { bestTime = t; bestT = T; }
    }

    cout << "Оптимальная тяга: " << bestT << endl;
    cout << "Минимальное время: " << bestTime << endl;
}