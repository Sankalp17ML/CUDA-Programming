#include <iostream>
using namespace std;


void change(int &x){
    x = 100;
}

int main(){
    int number = 10;

    change(number);

    cout << number << endl;

    return 0;

}

