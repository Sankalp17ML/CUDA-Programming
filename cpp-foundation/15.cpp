
#include <iostream>
using namespace std;


int findMax(int arr[], int size) {
    int maxi = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }

    return maxi;
}


double calculateAverage(int arr[], int size) {
    double sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum / size;
}


void arrModification(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum: " << findMax(arr, size) << endl;
    cout << "Average: " << calculateAverage(arr, size) << endl;

    arrModification(arr, size);

    cout << "Modified array: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
