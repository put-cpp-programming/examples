#include <iostream>
#include <string>

using namespace std;

float sum(float a, float b) { // This function add two floating point numbers. The result should  be returned, the datatype of returned value is float so function datatype is float.
    return a + b; 
}


int main() {
    cout << sum(1.2, 1.3) << endl;
    float op_a = 2.2;
    float op_b = 2.3;
    float result = sum(op_a, op_b);
    cout << result << endl;
    return 0;
}