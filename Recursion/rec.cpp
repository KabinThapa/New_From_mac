// basic recursion techniuque using a single decrement 
#include<iostream>
using namespace std;

int fact(int num){
    if(num == 0 || num == 1) return 1; // the base case at which the compilation or the loop stops
    else if(num < 0) return -1;
    else{
        return num*fact(num-1);
    }
}

int main(){
    int num,result;
    cout<<"Enter the number for factorial:";
    cin>>num;
    result = fact(num);
    if (!fact == -1)
    cout<<"The factorial of the number is :" <<fact(num);
    else
    cout<<"Can't have a recursive function for a negative number!\n";
    return 0;
}