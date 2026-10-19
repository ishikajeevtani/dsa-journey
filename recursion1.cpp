  // PRINT NAME N TIMES USING RECURSION 
  #include<bits/stdc++.h>
  using namespace std;

  void f(int i,int n) {
    if(i>n){
      return;
    }
    else{
      cout << "Ishika" << endl;
      f(i+1,n);
    }
  }


int main() {

  int n;
  cout << "Enter a number:-";
  cin >> n;
  f(1,n);
  return 0;
}