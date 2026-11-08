#include <iostream>
using namespace std;


int main(){
    int number = 50;

    int* ptr = &number;

    cout << "Value of number: " << number << endl;

    cout << "Address of number: " << &number << endl;

    cout << "Value stored in pointer: " << ptr << endl;

    cout << "Value pointed to by ptr: " << *ptr << endl;

    *ptr = 200;

    cout << "Updated number: " << number << endl;

    return 0;
}