// File datatype.cpp
// Show some data types 

/*-------------Note------------*/
// 1. Use define or const constant
// 2. Number interger
// 3. Number float
// 4. Number float double precision
// 5. Number long interger
// 6. Number short interger
// 7. Character type

#include <iostream>
using namespace std;
int main(){

    const double pi =3.14;
    #define PI 3.1459;
    int a=4;
    float b=2.3;
    double c = 3.43444;
    long d =  -2.34292939;
    short e = 43;
    char vary = 65;

    cout<<"Storage size for int :" << sizeof(int)<<" byte"<<endl;
    cout<<"Storage size for float:" << sizeof(float)<<" byte"<<endl;
    cout<<"Storage size for double :" << sizeof(double)<<" byte"<<endl;
    cout<<"Storage size for long :" << sizeof(long)<<" byte"<<endl;
    cout<<"Storage size for short :" << sizeof(short)<<" byte"<<endl;
    cout<<"Storage size for char :" << sizeof(char)<<" byte"<<endl;
    return 0;
}