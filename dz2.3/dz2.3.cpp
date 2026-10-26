#include <iostream>
#include <vector>
using namespace std;

int main() {
    double v0 = 50.0, g = 9.8;
    double dt = 1.0, tMax = 10.0;

    vector<double> times, velocities;

    for (double t = 0; t <= tMax; t += dt) {
        double v = v0 - g * t;

        times.push_back(t);
        velocities.push_back(v);
    }

    cout << "Vremya\tSkorost\n";

    for (int i = 0; i < times.size(); i++) {
        cout << times[i] << "\t"
            << velocities[i] << endl;
    }

    return 0;
}