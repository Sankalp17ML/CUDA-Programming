#include <iostream>
using namespace std;

void doubleVariable(int& number){
    number = number * 2;
}

int main(){
    int value = 25;

    doubleVariable(value);

    cout << "Updated Value : " << value << endl;

    return 0;
    
}