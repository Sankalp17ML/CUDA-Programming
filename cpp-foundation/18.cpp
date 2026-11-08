#include <iostream>
using namespace std;

int main(){
    int arr[4] = {10, 20, 30, 40};

    int* ptr = arr;

    cout << *ptr  << endl;

    return 0;
}