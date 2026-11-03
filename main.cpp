#include<iostream>
using namespace std;
void func2(int result){
  cout<<result;
}
void func1(int a, int b ){
  int sum = a + b;
  func2(sum);
}
int main()
{
  int num1 = 5, num2 = 10;
  func1(num1, num2);
  return 0;
}
