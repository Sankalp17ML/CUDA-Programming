#include <iostream>
using namespace std;


int main(){
    int res = 1;
    for (int i=1; i <= 10; i++){
        res = 7 * i;
        cout << "7 * " << i << " = " << res << endl;
    }
    return 0;
}