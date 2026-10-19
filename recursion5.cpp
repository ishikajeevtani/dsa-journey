//PRINT FROM N TO 1 
// {BY BACKTRACKING}
// {AND WITHOUT USING (i-1,N)}
#include<bits/stdc++.h>
using namespace std;

void f(int i , int n){
  if(i>n){
    return;
  }
  else{
    f(i+1,n);
    cout << i << endl;
  }
}
int main() {
  int n;
  cout << "Enter a number:-";
  cin >> n;
  f(1,n);
}