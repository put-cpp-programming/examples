#include <iostream>
#include <vector>

using namespace std;


int main() {
    vector<int> vec;
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        vec.push_back(a); // add new item to end of vector
    }
    // vec.size() - get the number of stored elements 
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " "; // element can be accesed like in classic array
    }
    return 0;
}