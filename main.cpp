#include<iostream>
using namespace std;

int reverseDigit(int num){
  int re_verse = 0;
  int remainder;
  while ( num > 0){
   remainder = num % 10;
  re_verse = re_verse * 10 + remainder;
  num /= 10;
 } 
 return re_verse;
}
int main(){
  int num = 12345;
  int reversedNum = reverseDigit(num);
  cout<<"Reversed number: " << reversedNum << endl;
  return 0;
}
