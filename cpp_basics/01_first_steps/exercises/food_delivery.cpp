#include <iostream>
using namespace std;

int main() {

    constexpr double priceChicken = 10.35;
    constexpr double priceFish = 12.40;
    constexpr double priceVegetarian = 8.15;

    int countChickedn, countFish, countVegetarian;
    cin >> countChickedn >> countFish >> countVegetarian;

    double sumChicken = priceChicken * countChickedn;
    double sumFish = priceFish * countFish;
    double sumVegetarian = priceVegetarian * countVegetarian;

    double totalSum = sumChicken + sumFish + sumVegetarian;
    double dessert = totalSum * 0.20;
    double totalPrice = totalSum + dessert + 2.50;
    cout << totalPrice << endl;

    return 0;
}