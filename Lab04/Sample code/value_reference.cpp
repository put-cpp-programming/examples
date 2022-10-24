#include <iostream>
#include <string>

using namespace std;

void increment_pass_by_value(int a){
    a++;
}

void increment_pass_by_reference(int &a){
    a++;
}


int main() {
    int val = 0;
    increment_pass_by_value(val);
    cout << "Val variable value after increment by value: " << val << endl;
    increment_pass_by_reference(val);
    cout << "Val variable value after increment by reference: " << val << endl;
    return 0;
}