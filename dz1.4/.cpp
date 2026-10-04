#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double h, ay;
    cout << "h ay: ";
    cin >> h >> ay;

    if (h <= 0 || ay <= 0) {
        cout << "Некорректный ввод" << endl;
        return 0;
    }

    double t = sqrt(2 * h / ay);
    cout << "t = " << t << endl;
}