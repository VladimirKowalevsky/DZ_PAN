#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct Aircraft {
    double m, T, CL, CD;
};

int main() {
    const double g = 9.81, rho = 1.225, V = 100.0, S = 20.0;

    int n;
    cout << "n = ";
    cin >> n;

    vector<Aircraft> a(n);
    for (int i = 0; i < n; i++) {
        cout << "m T CL CD: ";
        cin >> a[i].m >> a[i].T >> a[i].CL >> a[i].CD;
    }

    double h;
    cout << "h = ";
    cin >> h;

    vector<pair<double, int>> res;
    for (int i = 0; i < n; i++) {
        double L = 0.5 * rho * V * V * S * a[i].CL;
        double ay = (L - a[i].m * g) / a[i].m;
        double t = (ay > 0) ? sqrt(2 * h / ay) : 1e18;
        res.push_back(make_pair(t, i + 1));
    }

    sort(res.begin(), res.end());

    for (size_t i = 0; i < res.size(); i++)
        cout << "Самолет " << res[i].second << ": t = " << res[i].first << endl;
}