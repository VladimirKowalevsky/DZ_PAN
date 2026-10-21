#include <iostream>
#include <vector>
using namespace std;

int main() {
    double v0 = 50.0, g = 9.8;
    vector<double> times, heights;

    for (double t = 0; ; t += 1.0) {
        double h = v0 * t - 0.5 * g * t * t;

        if (h < 0)
            break;

        times.push_back(t);
        heights.push_back(h);
    }

    if (heights.empty()) {
        cout << "Net dannyh";
        return 0;
    }

    int maxIndex = 0;

    for (int i = 1; i < heights.size(); i++) {
        if (heights[i] > heights[maxIndex])
            maxIndex = i;
    }

    cout << "Maksimalnaya vysota: "
        << heights[maxIndex] << endl;
    cout << "Vremya: "
        << times[maxIndex] << " s" << endl;

    return 0;
}