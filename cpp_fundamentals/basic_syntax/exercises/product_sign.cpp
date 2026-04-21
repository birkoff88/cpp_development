#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0 || b == 0 || c == 0) {
        cout << "+";
    } else {
        int negativeCount = 0;

        if (a < 0) negativeCount++;
        if (b < 0) negativeCount++;
        if (c < 0) negativeCount++;

        if (negativeCount % 2 == 0) {
            cout << "+";
        } else {
            cout << "-";
        }
    }

    return 0;
}