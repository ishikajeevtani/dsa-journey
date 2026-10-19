//CHECk IF A STRING IS PALINDROME OR NOT 
 #include<bits/stdc++.h>
 using namespace std;

 bool f(int i,string &s){
  if(i>=s.size() / 2) return true;
  if(s[i] != s[s.size() - i - 1]) return false;
  return f(1+i,s);
 }
 int main() {
  string s = "madm";
  cout << f(0,s);

  return 0;
 }
