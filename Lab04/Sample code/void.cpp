#include <iostream>
using namespace std;

void print_hello() { // This function only print text, it do not return any data so the datatype is void, also any variable is not required do the parameter list is empty.
    cout << "Hello" << endl;
}

int main() {
    for(short i = 0; i < 4; i++){
        print_hello();
    }
    return 0;
}