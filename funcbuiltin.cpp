// File funcbuiltin.cpp
// Introduction to the fucntions libraby standart <cmath>

/*-----------Syntax--------------*/
// 1. double sqrt(double x)
// 2. int abs(int x)
// 3. double pow(double x, double y)
// 4. double log(double x)
// 5. double exp(double x)
// 6. double sin(double x)
// 7. double cos(double x)
// 8. double tan(double x)

#include <iostream>
#include <cmath>

using namespace std;
int main(){
    float a = 3;
    int b = -4;
    cout<<"Root square of a: "<<sqrt(a)<<endl;
    cout<<"The absoluate of a: "<<abs(a)<<endl;

    cout<<"The power three of a: "<<pow(a,3)<<endl;
    cout<<"The logarit e of a: "<<log(a)<<endl;
    cout<<"The expotinal of a: "<<exp(a)<<endl;
    
    cout<<"The sin of a: "<<sin(b)<<endl;
    cout<<"The cos of a: "<<cos(b)<<endl;
    cout<<"The tan of a: "<<tan(b)<<endl;
    return 0;
}