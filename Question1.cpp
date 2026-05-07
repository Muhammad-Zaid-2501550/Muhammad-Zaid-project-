#include <iostream>
using namespace std;

void getExtremes(float& min, float& max, float a[], int n) {
    min = a[0];
    max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }
}
int main() {
    float data[] = {25, 30, 10, 45, 50, 45, 70};
    float minVal, maxVal;
    getExtremes(minVal, maxVal, data, 7);
    cout << "Min: " << minVal << ", Max: " << maxVal << endl;
    return 0;
}