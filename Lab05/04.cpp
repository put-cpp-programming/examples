/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int *new_array(int *array, int old_size, int new_size){
    int *new_array = new int(new_size);
    for(int i = 0; i < old_size; i++){
        new_array[i] = array[i];
    }
    return new_array;
}

int main() {
    int *dynamic_array;
    int size;
    cout << "Enter size: ";
    cin >> size;
    dynamic_array = new int[size];
    
    for(int i = 0; i < size; i++){
        dynamic_array[i] = i;
        cout << dynamic_array[i] << " ";
    }
    int new_size;
    cout << "\nEnter new size: ";
    cin >> new_size; 
    int *new_dynamic_array = new_array(dynamic_array, size, new_size);
    
    for(int i = size; i < new_size; i++){
        cin >> new_dynamic_array[i];
    }
    cout << "\nNew arry:\n";
    for(int i = 0; i < new_size; i++){
        cout << new_dynamic_array[i] << " ";
    }
    
    delete [] new_dynamic_array;
    delete [] dynamic_array;
    return 0;
}
