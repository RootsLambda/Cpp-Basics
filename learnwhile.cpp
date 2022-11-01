// File learnwhile.cpp
// Introduce while loop and do while

/*-----------Syntax--------------*/
// 1. while (expression)
//  {
//   <statement>
//  }

// 2. do
// {
//   <statement 1>    
// }
// while (expression);

#include<iostream>
using namespace std;
int main(){
    
    int x= 5;
    while (x<25){
        x=2*x-1;
    }
    cout<<"x: "<<x<<endl;

    int k=1, sum=0;
    do{
        sum+=k;
        k++;
    } 
    while (k<10);

    cout<<"Sum 1 to 10: "<<sum;
    return 0;
}