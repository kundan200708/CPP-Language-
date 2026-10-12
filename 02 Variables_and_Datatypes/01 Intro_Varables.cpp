/*
(*) Variables:-
              --> A variable is a named memory location used to store data.

              --> Variables are names given to the data variables which have data type , variable is a place where we  will store the data
              in our program .

(*)Syntax for variables :
            datatype var_name;

for example:- int num1;// initializes num1 variable

              num1= 20; // assigning the value of num1 that is int data type so i am assiging 20 in it.

(*) Rules for naming variables :
            
                         (1) Variable with must start with a letter or underscore(_) not with a number .

                         (2) The variable can only contain uppercase  or lowercase  letter ,digit and underscore.

                         (3) Variable names must not be a keyword they have special meaning in the compiler .


*/

#include<iostream>
using namespace std;
 int main (){
    int num1=78;
    float f=1.54155f;
    double d=484.61616494964;
    string name= "seenu";
    char c='f';
    cout<<num1<<f<<d<<name<<c<<endl;
    
    return 0;
 }