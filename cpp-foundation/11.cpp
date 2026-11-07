#include <iostream>
#include <cmath>
using namespace std;

int square(int n){
    return n * n;
}

int main(){
    int n = 10;

    int res = square(n);

    cout << res << endl;
}