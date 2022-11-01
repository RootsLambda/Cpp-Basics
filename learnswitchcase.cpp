// File learnswitchcase.c
// No Conditional branch statement

/*-----------Syntax--------------*/
// switch <expression>{
// case value 1: block 1;
// case value 2: block 2;
// ....
// default:
//     block 0;
// }

#include<iostream>
using namespace std;

int main(){

    int n = 40;
    switch (n)
    {
        case 0:
            cout<<"Hello";
            break;
        case 20:
            cout<<"World";
            break;
        case 40:
            cout<<"Lambda";
            break;
        default:
            cout<<"Roots";
            break;
    }
    return 0;
}