// File learnfor.cpp
// Structure Loop

/*-----------Syntax--------------*/
// for(start_variable_loop,end_variable_loop,step)
// {
//    <statement>;
// }

#include<iostream>

using namespace std;

int main(){
    int sum =0;
    for (int k=1; k<10; k++)
    {
        sum=sum+k;
    }
    cout<<"Sum 1 to 10: "<<sum;
    return 0; 
}