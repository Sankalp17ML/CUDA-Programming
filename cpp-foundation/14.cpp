



#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int size = sizeof(arr) / sizeof(arr[0]);

    double sum = 0;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
        sum += arr[i];
    }

    cout << "Sum: " << sum << endl;

    double avg = sum / size;
    cout << "Average: " << avg << endl;

    return 0;
}
