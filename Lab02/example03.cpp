#include <iostream>
using namespace std;
  
int main()
{
    int a = 1;
    
    // if statement example
    if (a == 1){
        cout << "a is equal 1" << endl;;
    }
    a = 2; 
    if (a == 1){
        cout << "a is equal 1" << endl;;
    }
    
    // if else statement example
    if(a == 1) {
        cout << "a is equal 1" << endl;
    } else{
        cout << "a is not equal 1" << endl;
    }
    a = 1;
    // if else if statement example    
    if(a == 0) {
        cout << "a is equal 0" << endl;
    } else if (a == 1){
        cout << "a is equal 1" << endl;
    }
    
    a = 3;
    // if else if statement with else example    
    if(a == 0) {
        cout << "a is equal 0" << endl;
    } else if (a == 1){
        cout << "a is equal 1" << endl;
    } else {
        cout << "a is not zero or one" << endl;
    }
    
    switch (a){
        case 1: {
            cout << "a value is 1" << endl;
            break;
        }
        case 2: {
            cout << "a value is 2" << endl;
            break;
        }
        case 3: {
            cout << "a value is 3" << endl;
            break;
        }
        case 4: {
            cout << "a value is 4" << endl;
            break;
        }
    }
    
    switch (a){
        case 1: {
            cout << "a value is 1" << endl;
            break;
        }
        case 2: {
            cout << "a value is 2" << endl;
            break;
        }
        case 3: {
            cout << "a value is 3" << endl;
            break;
        }
        case 4: {
            cout << "a value is 4" << endl;
            break;
        }
        default: {
            cout << "the value of a is unknown" << endl;
        }
    }
    
    a = 10;
    switch (a){
        case 1: {
            cout << "a value is 1" << endl;
            break;
        }
        case 2: {
            cout << "a value is 2" << endl;
            break;
        }
        case 3: {
            cout << "a value is 3" << endl;
            break;
        }
        case 4: {
            cout << "a value is 4" << endl;
            break;
        }
        default: {
            cout << "the value of a is unknown" << endl;
        }
    }
    
    return 0;
}