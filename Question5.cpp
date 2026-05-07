#include <iostream>
#include <algorithm> 
using namespace std;
double getMean(int arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i]; 
    }
    return sum / n; 
}
double getMedian(int arr[], int n) {
    sort(arr, arr + n);
    if (n % 2 != 0) {
        return (double)arr[n / 2];
    } else {

        return (double)(arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
    }
}
int getMode(int arr[], int n) {
    int modeValue = arr[0];
    int maxCount = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            modeValue = arr[i];
        }
    }
    return modeValue;
}
int main() {
    int data[] = {11,33, 33, 66, 77, 88, 99};
    int size = 7;
    cout << "Mean: " << getMean(data, size) << endl;
    cout << "Median: " << getMedian(data, size) << endl;
    cout << "Mode: " << getMode(data, size) << endl;
    return 0;
}