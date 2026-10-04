#include <iostream>
#include <vector>
using namespace std;

struct Aircraft {
    double m, S, T, CL, CD;
};

int main() {
    const double g = 9.81, rho = 1.225, V = 100.0;

    int N;
    cout << "N = ";
    cin >> N;

    vector<Aircraft> a(N);
    for (int i = 0; i < N; i++) {
        cout << "m S T CL CD: ";
        cin >> a[i].m >> a[i].S >> a[i].T >> a[i].CL >> a[i].CD;
    }

    int leader = 0;
    double bestAx = -1e18;

    for (int i = 0; i < N; i++) {
        double L = 0.5 * rho * V * V * a[i].S * a[i].CL;
        double D = 0.5 * rho * V * V * a[i].S * a[i].CD;
        double ax = (a[i].T - D) / a[i].m;
        double ay = (L - a[i].m * g) / a[i].m;

        cout << "Самолет " << i + 1
            << ": L=" << L << " D=" << D
            << " ax=" << ax << " ay=" << ay << endl;

        if (ax > bestAx) { bestAx = ax; leader = i; }
    }

    cout << "Лидер по ускорению: самолет " << leader + 1 << endl;
}
