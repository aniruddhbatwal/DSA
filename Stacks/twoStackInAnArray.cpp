#include<iostream>
using namespace std;

class twoArray{
    int *arr;
    int size;
    int top1;
    int top2;
public:
    twoArray(int s){
        size=s;
        top1=-1;
        top2=s;
    }
    void push1(int num){
        if(top1-top2>1){
            top1++;
            arr[top1]=num;
        }
        else{
            cout<<"Stack Overflow";
        }
    }
    void push2(int num){
        if(top1-top2>1){
            top2--;
            arr[top2]=num;
        }
        else{
            cout<<"Stack Overflow";
        }
    }

    int pop1(){
        if(top1>=0){
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }
    int pop2(){
        if(top2<size){
            int ans=arr[top1];
            top2++;
            return ans;
        }
    }
};

int main(){

}