#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char>p;
        for(char c:s){
            if(c=='(' || c=='{' || c=='['){
                p.push(c);
            }
            else{
                if(p.empty()){
                    return false;
                }
                if((c==')' && p.top()=='(') || (c=='}' && p.top()=='{') || (c==']' && p.top()=='[')){
                    p.pop();
                }
                else{
                    return false;
                }
            }
        }
        return p.empty();
    }
};