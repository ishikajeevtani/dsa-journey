//PRINT LINEARLY FROM 1 TO N
//{BUT BY BACKTRACKING} (without the use of + operator)
#include<iostream>
using namespace std;

void f(int i,int n){
  if(i<1){
    return;
  }
  else{
    f(i-1,n);
    cout << i << endl;
  }
}

int main(){

  int n;
  cout << "Enter a number:- ";
  cin >> n;
  f(n,n); 
  return 0;
}