#include <iostream>
using namespace std;

int main() {

    int hoursPerProject = 3;
    int name, numOfProjects;
    cin >> name >> numOfProjects;

    int totalHours = hoursPerProject * numOfProjects;
    cout << "The architect " << name << " will need " << totalHours << " hours to complete " << numOfProjects << " project/s." << endl;

    return 0;
}