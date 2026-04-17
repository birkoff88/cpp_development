#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int odd = 1;

    for (int i = 0; i < n; i++) {
        cout << odd << endl;
        sum += odd;
        odd += 2;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}