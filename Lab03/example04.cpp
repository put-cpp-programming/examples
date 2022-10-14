#include <iostream>
using namespace std;
int main() {
    for(int i = 10; i < 20; i++) {
        if (i == 11)
            break;
            
        cout << "Hello from for loop.\n";
    }
    
    for(int i = 10; i < 14; i++){
        for(int a = 0; a < 4; a++){
            cout << "Hello from nested for loop" << endl;
            break;
        }
    }
    return 0;
}
