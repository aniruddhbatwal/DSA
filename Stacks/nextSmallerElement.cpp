#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
  int n=5;
  int arr[5];
  stack<int>s;
  vector<int>ans;
  s.push(-1);
  for(int i=n-1;i>=0;i--){
      int curr=arr[i];
      while(s.top()>=curr){
      s.pop();
      }
      ans[i]=s.top();
      s.push(curr);
  }
}