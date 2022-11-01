// File learnfunc.cpp
// Show us function basics

/*-----------Syntax--------------*/
// Return_type <name funcion>(type variable1, type variable2, .....){
// <Statement>
// return value 
// }
// If return type 'void' will no return value

#include<iostream>
using namespace std;

int add(int x, int y){
    return x+y;
}

void subtract(int a,int b)
{
    int c;
    c=a-b;
    cout<<"Value c is: "<<c<<endl;
}

int main(){
    cout<<"Result add: "<<add(3,2)<<endl;
    subtract(4,5);
    return 0;
}