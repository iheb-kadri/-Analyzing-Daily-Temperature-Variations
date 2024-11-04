#include <iostream>
#include <vector>

double calculateAverageTemp(const std::vector<double>& arr);
double findMaxTemp(const std::vector<double>& arr);
double findMinTemp(const std::vector<double>& arr);

int main() {
    int size;
    std::cout << "Enter the number of days: " << '\n';
    std::cin >> size;

    std::vector<double> temperatures(size);
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter the temperature of day " << i + 1 << ": " << '\n';
        std::cin >> temperatures[i];
    }

    double averageTemp = calculateAverageTemp(temperatures);
    std::cout << "The average temperature is: " << averageTemp << '\n';

    double maxTemp = findMaxTemp(temperatures);
    std::cout << "The maximum temperature is: " << maxTemp << '\n';

    double minTemp = findMinTemp(temperatures);
    std::cout << "The minimum temperature is: " << minTemp << '\n';

    double variationTemp = maxTemp - minTemp;
    std::cout << "The variation of the temperature is: " << variationTemp << '\n';

    return 0;
}

double calculateAverageTemp(const std::vector<double>& arr) {
    double sum = 0;
    for (double temp : arr) {
        sum += temp;
    }
    return sum / arr.size();
}

double findMaxTemp(const std::vector<double>& arr) {
    double max = arr[0];
    for (double temp : arr) {
        if (temp > max) {
            max = temp;
        }
    }
    return max;
}

double findMinTemp(const std::vector<double>& arr) {
    double min = arr[0];
    for (double temp : arr) {
        if (temp < min) {
            min = temp;
        }
    }
    return min;
}

