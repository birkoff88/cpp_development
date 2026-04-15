#include <iostream>
using namespace std;

int main () {
    constexpr double price_per_mc2 = 7.61;

    int mc2;
    cin >> mc2;
    double discount = 0.18;
    double price_for_garden = mc2 * price_per_mc2;
    double final_price = price_for_garden - (price_for_garden * discount);
    cout << "The price for the garden is: " << final_price << endl;
    cout << "The discount is: " << price_for_garden * discount << endl;

}