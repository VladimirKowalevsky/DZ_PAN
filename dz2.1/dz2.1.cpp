#include <iostream>
#include <vector>
using namespace std;

int main() {
    double v0 = 50.0, g = 9.8, dt = 1.0;
    vector<double> times, heights;

    for (double t = 0; ; t += dt) {
        double h = v0 * t - 0.5 * g * t * t;

        if (h < 0)
            break;

        times.push_back(t);
        heights.push_back(h);
    }

    cout << "Vremya\tVysota\n";

    for (int i = 0; i < times.size(); i++) {
        cout << times[i] << "\t"
            << heights[i] << endl;
    }

    return 0;
}