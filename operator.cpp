// File operator.cpp
// Introduction to common operators in C++

/*-------------Note------------*/
// 1. Variables need to be declared first
// 2. Use the << operator to join sentences
// 3. Use the endl statement to return a line instead of \n

#include<iostream>
using namespace std;
int main(){
    // 1.Arithmetic expression
    int a=4, b =5;
    cout<<"Add: "<<a+b<<endl;
    cout<<"Subtract: "<<a-b<<endl;
    cout<<"Mutily: "<<a*b<<endl;
    cout<<"Divide: "<<a/b<<endl;
    
    // 2.Comparison expression
    float c=4.5, d= 3.4;
    cout<<"Operator '>' is greater: "<< (c>d)<<endl;
    cout<<"Operator '<' is less: "<< (c<d)<<endl;
    cout<<"Operator '==' is equality: "<< (c==d)<<endl;
    cout<<"Operator '!=' is not equality: "<<(c!=d)<<endl;

    // 3.Logical operator
    double e =45.4, f =3.2;
    cout<<"NOT is '!': "<<(!e)<<endl;
    cout<<"AND is '&&': "<<(e&&f)<<endl;
    cout<<"OR is '||': "<<(e||f)<<endl;

    // 4. Complex expression
    int r = 3;
    float area =3.14*r*r;
    cout<<"Area is cricle: "<<area<<endl;

    return 0;
}