// File learnconditon.cpp
// Conditional branch statement

/*-----------Syntax--------------*/
// 1. if <condition>
//    {block statement}

// 2. if <condition>  
//    {block statement 1}
//   else {block statement 2}

// 3. if <condition 1>
//    {block statement 1}
//   else if <condition 2>
//    {block statement 2}
//   ...
//   else {block statement n}

#include<iostream>
using namespace std;

int main(){
   int max, a, b;
   cin>>a;
   cin>>b;
   max=a;
   if (a<b){
    max=b;
    }    
    cout<<"Max a and b: "<<max<<endl;

    // Condition if-else
    if (a<b){
        max=a;
    }
    else{
        max=b;
    }

    // Conditon if-else if-else
    int k=-1;
    if (k==6)
        cout<<k<<" is a number equal to 6"<<endl;
    else if (k>6)
        cout<<k<<" is a number greater than 6"<<endl;
    else if (0<k<6)
        cout<<k<<" is a number less than 6"<<endl;
    else
        cout<<k<<" is a number nagetive"<<endl;
        
    return 0;

}