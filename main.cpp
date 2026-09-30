#include <iostream>

using namespace std;

int main()
{
   int x;
   int y;
   int z;
   int Sum; 
   int Sub;
   int Div;
   int Multi; 
   int Remainder;
 cout<<"Enter First Integer ";
 cin>>x;
 cout<<"Enter Second Integer ";
 cin>>y;
 cout<<"Enter Third Integer ";
 cin>>z;

 Sum = x + y + z;
 Sub = x - y - z;
 Div = x/y;
 Multi = x * y * z;
 Remainder = x % y % z;

 cout<<"Sum is = "<<Sum<<endl;
 cout<<"Sub is = "<<Sub<<endl;
 cout<<"Div is = "<<Div<<endl;
 cout<<"Multi is = "<<Multi<<endl;
 cout<<"Remainder is = "<<Remainder;
 return 0;
}