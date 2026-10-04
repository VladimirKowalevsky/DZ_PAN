
#include <iostream>
#include <cmath>
using namespace std;

struct Plane {
    double m, S, T, CL, CD;
};

int main() {
    const double g = 9.81, rho = 1.225, V = 100.0;

    Plane p[3];
    for (int i = 0; i < 3; i++) {
        cout << "Самолет " << i + 1 << " (m S T CL CD): ";
        cin >> p[i].m >> p[i].S >> p[i].T >> p[i].CL >> p[i].CD;
    }

    double h;
    cout << "h = ";
    cin >> h;

    int best = -1;
    double bestTime = 1e18;

    for (int i = 0; i < 3; i++) {
        double L = 0.5 * rho * V * V * p[i].S * p[i].CL;
        double ay = (L - p[i].m * g) / p[i].m;
        if (ay <= 0) continue;

        double t = sqrt(2 * h / ay);
        cout << "Самолет " << i + 1 << ": t = " << t << endl;

        if (t < bestTime) { bestTime = t; best = i; }
    }

    if (best >= 0)
        cout << "Быстрее всех: самолет " << best + 1 << endl;
}
