#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main() {

    string name;
    int age;
    float grade;

    cin >> name;
    cin >> age;
    cin >> grade;

    cout << fixed << setprecision(2);
    cout << "Name: " << name <<", ";
    cout << "Age: " << age <<", ";
    cout << "Grade: " << grade << endl;
    

    return 0;


}