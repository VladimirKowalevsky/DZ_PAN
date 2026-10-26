#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<double> velocities;
    double v0 = 50.0, g = 9.8;

    for (double t = 0; t <= 10; t += 1.0) {
        velocities.push_back(v0 - g * t);
    }

    if (velocities.empty()) {
        cout << "Net dannyh";
        return 0;
    }

    double sum = accumulate(
        velocities.begin(), velocities.end(), 0.0
    );

    double avg = sum / velocities.size();

    cout << "Srednyaya skorost: " << avg << endl;

    return 0;
}