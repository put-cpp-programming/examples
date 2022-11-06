#include <iostream>

using namespace std;

int main() {
    int a = 10; // Create variable called ,,a'' and initialize it with 10
    int *a_ptr = &a; // Crete pointer variable - to create pointer add * mark before variable name 
    // get the address of ,,a'' variable and assign it to the a_prt.
    // To read memory address use ,,&'' mark before variable name.
    cout << "A: " << a << endl; // print the ,,a'' value
    cout << "A_ptr: " << a_ptr << endl; // print ,,a_ptr'' value which is and memory address of a value 
    cout << "*A_ptr: " << *a_ptr << endl; // print value stored under address
    // use ,,*'' mark to get the value under the address
    return 0;
}
