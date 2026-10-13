/*
(*) Input in c++:-
                 -->In C++, input is the process of taking data from the user and storing it in variables for processing.

                 -->The cin statement is commonly used to take input from the keyboard.


(*) Syntax of Input:-
                    cin >> variable;

                   --> cin – used to take input from the user.
                   -->  >> – called the extraction operator.
                   --> variable – stores the entered value.
*/
#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is: " << age<<"Years ";
    
    return 0;
}