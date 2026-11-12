#include <iostream>
#include <vector>
using namespace std;

void updateVector(vector<int>& v) {

    for (int i = 0; i < v.size(); i++) {
        v[i] *= 2;
    }

    v.push_back(100);
}

int main() {

    vector<int> numbers = {2, 4, 6, 8};

    updateVector(numbers);

    for (int x : numbers) {
        cout << x << " ";
    }

    return 0;
}