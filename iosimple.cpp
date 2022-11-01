// File iosimple.cpp
// Introduction to simple input, annotation command

/*-------------Note------------*/
// 1. Declare <iostream> using built-in functions as standard input and output
// 2. Namespace declaration is required to use cin and cout
// 3. Entry point of the program starts function main
// 4. Program starts and ends in match {}
// 5. Return 0 to report the program has finished running and no errors are encountered
// 6. Output using the function prinnf()
// 7. Input using the function scanf()
// 8. Annotating on a line we use the // operator and mutiply use /*<text>*/
// 9. Run g++ iosimple.cpp -o iosimple to create iosimple.exe
// 10. Then run file ./iosimple.exe

#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Hello world!";
    cin>>a;
    return 0;
}