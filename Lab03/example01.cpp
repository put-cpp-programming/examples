#include <iostream>
using namespace std;
int main()
{
    for(int i = 0 ; i < 4; i++) {
        cout << "First for loop: " << i << "." << endl;
    }
    cout << "************************************" << endl;
    for(int i = 4; i > 0; --i){
        cout << "Second for loop: " << i << "." << endl;
    }
    cout << "************************************" << endl;
    int k = 0;
    for(; k < 4; k++){
        cout << "Third for loop: " << k << "." << endl;
    }
    k = 0;
    cout << "************************************" << endl;
    for(; k < 4; ){
        cout << "Fourth for loop: " << k << "." << endl;
        k++;
    }
    return 0;
}