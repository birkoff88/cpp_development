#include <iostream>
using namespace std;



int main() {
    constexpr double dog_price = 2.5;
    constexpr double cat_price = 4;

    int dog_orders, cat_orders;
    cin >> dog_orders >> cat_orders;

    double total_price = dog_price * dog_orders + cat_price * cat_orders;
    cout << total_price << endl;
}