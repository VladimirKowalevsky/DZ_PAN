#include <iostream>
#include <vector>
using namespace std;

struct Point {
    double x, y, z;
};

int main() {
    double vx = 30.0, vy = 20.0, vz = 40.0;
    double dt = 1.0;
    double x = 0, y = 0, z = 0;

    vector<Point> traj;

    for (double t = 0; t <= 10; t += dt) {
        traj.push_back({ x, y, z });

        x += vx * dt;
        y += vy * dt;
        z += vz * dt;
    }

    cout << "X\tY\tZ\n";

    for (int i = 0; i < traj.size(); i++) {
        cout << traj[i].x << "\t"
            << traj[i].y << "\t"
            << traj[i].z << endl;
    }

    return 0;
}