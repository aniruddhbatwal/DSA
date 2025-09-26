#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&s,int num){
    //base case
    if(s.empty()) {
        s.push(num);
        return ;
    }
    
    int top = s.top();
    s.pop();
    
	//RECURSIVE CALL
    insertAtBottom(s,num);
    
    s.push(top);
}

void reverseStack(stack<int>&s){
    if(s.empty()){
        return;
    }

    int num=s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s,num);
    
}   