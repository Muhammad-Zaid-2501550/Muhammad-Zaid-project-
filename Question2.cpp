#include <iostream>
#include <cmath>   
#include <vector>
double stdev(double x[], int n) {
    if (n <= 1) {
        return 0;
    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += x[i];
    }
    double mean = sum / n;
    double squared_Diff_Sum = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = x[i] - mean;
        squared_Diff_Sum += std::pow(diff, 2);
    }
    double variance = squared_Diff_Sum / (n - 1);
    return std::sqrt(variance);
}
int main() {
    double data[] = {10, 12, 9, 15, 8};
    int n = sizeof(data) / sizeof(data[0]);
    double result = stdev(data, 5);
    std::cout << "Data points: " << n << std::endl;
    std::cout << "Standard Deviation: " << result << std::endl;
    return 0;
}