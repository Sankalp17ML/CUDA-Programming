#include <iostream>
using namespace std;

int multiply(int a , int b){
    return a * b;
}

double multiply(double a, double b){
    return a * b;
}

int multiply(int a , int b, int c){
    return a * b * c;
}

int main() {
    cout << multiply(5, 4) << endl;
    cout << multiply(2.5, 4.0) << endl;
    cout << multiply(2, 3, 4) << endl;

    return 0;
}