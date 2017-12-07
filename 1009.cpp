#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
  stack<string> v;
  string s;
  while(cin >> s){
    v.push(s);
    // cout << v.size() << endl;
  }
  cout << v.top();
  v.pop();
  while(!v.empty()){
    cout << " " << v.top();
    v.pop();
  }
  return 0;
}