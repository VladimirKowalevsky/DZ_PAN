#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<double> times1, heights1;
    vector<double> times2, heights2;

    double v01 = 50.0, v02 = 40.0, g = 9.8;

    for (double t = 0; ; t += 1.0) {
        double h = v01 * t - 0.5 * g * t * t;

        if (h < 0)
            break;

        times1.push_back(t);
        heights1.push_back(h);
    }

    for (double t = 0; ; t += 1.0) {
        double h = v02 * t - 0.5 * g * t * t;

        if (h < 0)
            break;

        times2.push_back(t);
        heights2.push_back(h);
    }

    int max1 = max_element(
        heights1.begin(), heights1.end()
    ) - heights1.begin();

    int max2 = max_element(
        heights2.begin(), heights2.end()
    ) - heights2.begin();

    cout << "Raketa 1:\n";
    cout << "Max vysota: " << heights1[max1] << endl;
    cout << "Vremya maksimuma: " << times1[max1] << endl;

    cout << "\nRaketa 2:\n";
    cout << "Max vysota: " << heights2[max2] << endl;
    cout << "Vremya maksimuma: " << times2[max2] << endl;

    if (heights1[max1] > heights2[max2])
        cout << "\nRaketa 1 podnyalas vyshe\n";
    else if (heights2[max2] > heights1[max1])
        cout << "\nRaketa 2 podnyalas vyshe\n";
    else
        cout << "\nRakety podnyalis na odnu vysotu\n";

    cout << "Vremya poleta rakety 1: "
        << 2 * v01 / g << " s" << endl;

    cout << "Vremya poleta rakety 2: "
        << 2 * v02 / g << " s" << endl;

    return 0;
}
