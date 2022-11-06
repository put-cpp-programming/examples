#include <iostream>

using namespace std;

int main() {
    int static_array[4] = {10, 20, 12, 28};
    cout << "Memory addres of first element: " << static_array << endl;
    cout << "Memory addres of second element: " << (static_array + 1) << endl;
    cout << "Memory addres of third element: " << (static_array + 2) << endl;
    cout << "Memory addres of fourth element: " << (static_array + 3) << endl;
    return 0;
}