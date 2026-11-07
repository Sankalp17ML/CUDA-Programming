
#include <iostream>
using namespace std;


double calculateAverage(int a, int b, int c);

int main() {
    int a = 10;
    int b = 10;
    int c = 11;

    double res = calculateAverage(a, b, c);

    cout << res << endl;

    return 0;
}


double calculateAverage(int a, int b, int c) {
    return static_cast<double>(a + b + c) / 3;
}
