#include <iostream>
using namespace std;

int main() {
    const double g = 9.81;
    double m, L, D, T;
    cout << "m L D T: ";
    cin >> m >> L >> D >> T;

    double ay = (L - m * g) / m;

    if (ay > 0.5)       cout << "Набор высоты" << endl;
    else if (ay >= 0)   cout << "Горизонтальный полет" << endl;
    else                cout << "Снижение" << endl;
}