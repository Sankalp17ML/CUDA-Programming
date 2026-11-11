#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {10, 20,30};

    v.push_back(40);
    v.push_back(50);
    v.pop_back();
    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
