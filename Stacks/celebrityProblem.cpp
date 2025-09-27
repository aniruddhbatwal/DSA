#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
  int matrix[3][3]={{0,1,0},{0,0,0},{0,1,0}};
  stack<int>s;
  s.push(0);
  s.push(1);
  s.push(2);
  while(s.size()>1){
      int a = s.top(); s.pop();
      int b = s.top(); s.pop();

      if (matrix[a][b] == 1) {
      // a knows b → a cannot be celebrity
      s.push(b);
      } else {
      // a does not know b → b cannot be celebrity
      s.push(a);
      }

  }
  int celeb=s.top();
  bool isCeleb = true;
  for (int i = 0; i < 3; i++) {
      if (i == celeb) continue;
      if (matrix[celeb][i] == 1 || matrix[i][celeb] == 0) {
          isCeleb = false;
          break;
      }
  }
  if (isCeleb) cout << "Celebrity is: " << celeb << endl;
  else cout << "No celebrity" << endl;


}