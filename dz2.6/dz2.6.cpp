#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<double> heights = { 0, 5, 12, 25, 8, 40, 3, 15 };

    auto it = remove_if(
        heights.begin(), heights.end(),
        [](double h) {
            return h < 10;
        }
    );

    heights.erase(it, heights.end());

    cout << "Novye vysoty:\n";

    for (int i = 0; i < heights.size(); i++) {
        cout << heights[i] << " ";
    }

    return 0;
}