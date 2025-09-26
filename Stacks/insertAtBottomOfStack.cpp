#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&inputStack,int element) {
    //base case
    if(inputStack.empty()) {
        inputStack.push(element);
        return ;
    }
    
    int num = inputStack.top();
    inputStack.pop();
    
	//RECURSIVE CALL
    solve(inputStack,element);
    
    inputStack.push(num);
    
}

void insertBottom(stack<int>&inputStack,int element){
    solve(inputStack,element);
   
}