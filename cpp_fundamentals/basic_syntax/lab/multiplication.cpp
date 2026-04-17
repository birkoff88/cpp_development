#include <iostream>
using namespace std;

int main() {

    int i;
    cin >> i;

    for(int curNumber = 1; curNumber <= 10; curNumber++) {
        cout << i << " X " << curNumber << " = " << i * curNumber << endl;
    }

    return 0;
}