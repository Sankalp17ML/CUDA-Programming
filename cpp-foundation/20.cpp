#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);
    int* ptr = arr;

    for (int i = 0; i < size; i++) {
        *(ptr + i) *= 2;
    }

    for (int i = 0; i < size; i++) {
        cout << *(ptr + i) << endl;
    }

    return 0;
}