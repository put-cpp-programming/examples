#include <iostream>
using namespace std;
int main() {
    int i = 0;
    do{
        cout << "First cout\n";
    }while(false);
    
    do {
        cout<< "Second cout\n";
    }while(i <0);
    
    do {
        cout << "Third do-while statement\n";
        i++ ;
    } while(i < 4);
    return 0;
}