#include <iostream>
using namespace std;   

int main (){
    string name;
    cin >> name;

    string lastName;
    cin >> lastName;

    int age;
    cin >> age; 

    string town;
    cin >> town;
    // You are <firstName> <lastName>, a <age>-years old person from <town>.
    cout << "You are " << name << " " << lastName << ", a " << age << "-years old person from " << town << "." << endl;
    return 0;
}  