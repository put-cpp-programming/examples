#include <iostream>
using namespace std;
  
int main()
{
    int a = 1;
    
    if(a == 0) {
        cout << "first condition" << endl;
    } else if (a == 1){
        cout << "second condition" << endl;
    } else if (a == 1){
        cout << "third condition" << endl;
    }  else {
        cout << "if all conditions are false" << endl;
    }
    
    if(a == 1) {
        cout << "first condition" << endl;
    } else if (a == 1){
        cout << "second condition" << endl;
    } else if (a == 1){
        cout << "third condition" << endl;
    }  else {
        cout << "all conditions are false" << endl;
    }
    cout << "****************************************************************************" << endl;
    cout << "****************************************************************************" << endl;
    cout << "****************************************************************************" << endl;
    cout << "****************************************************************************" << endl;
    
    switch (a){
        case 1: {
            cout << "first case" << endl;
        }
        case 2: {
            cout << "second case" << endl;
            break;
        }
        case 3: {
            cout << "third case" << endl;
            break;
        }
        case 4: {
            cout << "fourth case" << endl;
            break;
        }
    }
    return 0;
}