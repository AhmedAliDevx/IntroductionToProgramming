#include <iostream>
using namespace std;

int main()
{
    const int a = 10; //Const is used so the value of a can't be changed
    int b = 50;
    b = 100; //As you can see, B is changed here
    cout<<a<<b;

    return 0;
}