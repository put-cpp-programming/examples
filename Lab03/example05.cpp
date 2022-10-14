#include <iostream>
using namespace std;
int main() {
    for(int i = 10; i < 30; i+=5) {
        cout << "Hello from for loop.\n";
        continue;
        cout << "Never printed :/" << endl;
    }
    return 0;
}