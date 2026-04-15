#include <iostream>
#include <iomanip>

int main() {
    constexpr double CM3_TO_LITERS = 0.001;

    int lengthCm, widthCm, heightCm;
    double percentOccupied;

    std::cin >> lengthCm >> widthCm >> heightCm >> percentOccupied;

    long long volumeCm3 = 1LL * lengthCm * widthCm * heightCm;
    double volumeLiters = volumeCm3 * CM3_TO_LITERS;

    double occupiedLiters = volumeLiters * (percentOccupied / 100.0);
    double neededLiters = volumeLiters - occupiedLiters;

    std::cout << std::fixed << std::setprecision(2) << neededLiters << '\n';
    return 0;
}