#include <iostream>

using namespace std;

int main() {
    int *dynamic_array;
    int size;
    cout << "Enter size: ";
    cin >> size;
    dynamic_array = new int(size);
    for(int i = 0; i < size; i++){
        dynamic_array[i] = i;
        cout << dynamic_array[i] << " ";
    }
    delete [] dynamic_array;
    return 0;
}
