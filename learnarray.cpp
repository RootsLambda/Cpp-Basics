// File learnarray.cpp
// Concept array C

/*-----------Syntax--------------*/
// type_array <name_array>[length_array] = {element 1, element2, ....};

// /*-------------Note------------*/
// Character arrays are views as character strings
// The ends element of the array must be null '\0'

#include<iostream>
using namespace std;

int main(){

    // Traversal array one dimensional
    int A[4]={1,3,4,5};
    for (int i=0;i<4;i++)
    {
        cout<<A[i]<<endl;
    }

    char word[5]={'a','b','c','d','e'};
    for (int i=0; i<5; i++){

        cout<<word[i]<<endl;
    }
    
    char mess[10]="message";
    cout<<mess[4];

    // Traversal array two dimensional
    int B[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    for (int i=0; i<3;i++){
        cout<<endl;
        for(int j=0; j<3; j++){
            cout<<B[i][j]<<'\t';
        }
    }
    return 0;
}
