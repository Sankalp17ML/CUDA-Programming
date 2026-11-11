#include <iostream>
using namespace std;

int main() {

    int size = 5;

    int* numbers = new int[size];

    for (int i = 0; i < size; i++) {
        numbers[i] = (i + 1) * 10;
    }


    int sum = 0;

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
        sum += numbers[i];
    }

    cout << "\nSum: " << sum << endl;

    delete[] numbers;

  
    numbers = nullptr;

    return 0;
}