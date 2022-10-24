#include <iostream>
#include <string>

using namespace std;

void print_message(string message) { // This function only print text, it do not return any data so the datatype is void. This punction print string variable passed by the parameter list.
    cout << message << endl;
}

int main() {
    for(short i = 0; i < 4; i++){
        print_message("World")
    }
    return 0;
}