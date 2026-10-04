#include <iostream>
using namespace std;

int main() {
    const double g = 9.81;
    double m, L, D, T;
    cout << "m L D T: ";
    cin >> m >> L >> D >> T;

    double a = (T - D) / m;
    double ay = (L - m * g) / m;

    cout << "Продольное ускорение a  = " << a << endl;
    cout << "Вертикальное ускорение ay = " << ay << endl;
}
