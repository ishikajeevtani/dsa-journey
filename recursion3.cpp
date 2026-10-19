//PRINT IN TERMS OF N -> 1 
#include<bits/stdc++.h>
using namespace std;

void f(int i,int n){
  if(i<1){
    return;
  }
  else{
    cout << i << endl;
    f(i-1,n);
  }
}

int main() {

  int n;
  cout << "Enter a number:- ";
  cin >> n;
  f(n,1);
  //  or it can also be written as (n,n) say n = 3 (3,3)
}