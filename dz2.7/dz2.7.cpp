#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<double> times, heights;
    double v0 = 50.0, g = 9.8;

    for (double t = 0; t <= 12; t += 1.0) {
        double h = v0 * t - 0.5 * g * t * t;

        times.push_back(t);
        heights.push_back(h);
    }

    auto it = find_if(
        heights.begin() +1, heights.end(),
        [](double h) {
            return h <= 0;
        }
    );

    if (it != heights.end()) {
        int index = it - heights.begin();

        cout << "Vremya padeniya: "
            << times[index] << " s" << endl;
        cout << "Vysota: "
            << heights[index] << " m" << endl;
    }
    else {
        cout << "Padeniya net v etom diapazone";
    }

    return 0;
}
