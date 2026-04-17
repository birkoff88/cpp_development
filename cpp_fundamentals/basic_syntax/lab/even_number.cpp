#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int number;

    do {
        cin >> number;
        if (number % 2 != 0) 
            cout << "Please write an even number." << endl;
        
    } while(number % 2);
    
    cout << "The number is: " << abs(number) << endl;

    return 0;
}
