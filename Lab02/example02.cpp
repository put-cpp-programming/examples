#include <iostream>
using namespace std;
  
int main()
{
    cout <<  "1 / 2 = " << 1 / 2 << endl;
    cout <<  "1.0 / 2 = " << 1.0 / 2 << endl;
    cout <<  "1 / 2.0 = " << 1 / 2.0 << endl;
    cout <<  "1.0 / 2.0 = " << 1.0 / 2.0 << endl;
    cout <<  "static_cast<double>(1) / 2 = " << static_cast<double>(1) / 2 << endl;
    return 0;
}