#include <iostream>
using namespace std;

int main() {

    double grade;
    cin >> grade;

    if (grade >= 3.00) {
        cout << "Passed!" << endl;
    } else {
        cout << "Failed!" << endl;
    }

// conditional if ->> cout  << (grade >= 3.00 ? "Passed!" : "Failed!") << endl;

    return 0;
}