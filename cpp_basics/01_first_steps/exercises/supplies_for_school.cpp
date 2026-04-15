#include <iostream>
using namespace std;

int main(){

    int countPens;
    cin >> countPens;

    int countMarkers;
    cin >> countMarkers;

    int litersCleaner;
    cin >> litersCleaner;

    int discountPercent;
    cin >> discountPercent;

    double sumOfPens = countPens * 5.80;
    double sumMarkers = countMarkers * 7.20;
    double sumCleaner = litersCleaner * 1.20;

    double totalSum = sumOfPens + sumMarkers + sumCleaner;
    double discount = totalSum * (discountPercent / 100.0);
    double finalPrice = totalSum - discount;  

    cout << finalPrice << endl;


    return 0;
}