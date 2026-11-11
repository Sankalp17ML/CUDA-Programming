#include<iostream>
using namespace std;

int main(){
    int size=3;

    int* arr = new int[size]{10, 20, 30};

    int newSize = 5;

    int* newArr = new int[newSize]{};

    for (int i = 0; i< size; i++){
        newArr[i] = arr[i];

    }

    delete[] arr;

    arr = newArr;
    newArr = nullptr;

    size = newSize;

    arr[3] = 40;
    arr[4] = 50;

    for(int i=0; i<size;i++){
        cout << arr[i] << " ";

    }
    delete[] arr;
    arr = nullptr;

    return 0;
    
}

