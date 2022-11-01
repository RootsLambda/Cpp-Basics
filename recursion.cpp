// File recursion.cpp
// Introduction to recursive structures

/*-------------Note------------*/
// 1. Base clause
// 2. Recursive clause
// 3. Infinite recursion if it has no termination clause or base clause

#include<iostream>
using namespace std;

int fibo(int i){
    if (i==0)
    {
        return 0;
    }
    if (i==1)
    {
        return 1;
    }
    return fibo(i-1) + fibo(i-2);
}

int main(){
    cout<<fibo(4);
    return 0;
}