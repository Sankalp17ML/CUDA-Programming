#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2,4,6,8,10};

    int* ptr = arr;

    for (int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        cout << *(ptr + i) << endl;
        
        
    }
    return 0;


}