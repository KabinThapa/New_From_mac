//recursion visualization as a stack

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    int num,res{1};

    cout<<"Enter a number for factorial:";
    cin>>num;
    if (num == 0 || num == 1)cout<<"FActorial : "<<1;
    else if (num < 0) {
        cout<<"Factorial of negative number doesn't exixt";
        return 0;
    }
    for(int i = num ; i > 0 ; i--){
        st.push(i);
    }
    for(int i = num ; i > 0 ; i--){
        res *= st.top();
        st.pop();
    }
    cout<<"The factorial of"<<num<<"is:"<<res;
    return 0;
}