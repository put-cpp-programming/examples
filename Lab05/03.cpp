#include <iostream>

using namespace std;

int main() {
    int *dynamic_array;
    dynamic_array = new int(4);
    for(int i = 0; i < 4; i++){
        dynamic_array[i] = i;
        cout << dynamic_array[i] << " ";
    }
    delete dynamic_array;
    return 0;
}
