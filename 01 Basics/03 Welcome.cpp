// Write a program to display welcome message with name of user?
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name~~ ";
    // cin>> name;
    // Above cin only reads single word from user input and if we want to get full name then we have to use getline.

    getline(cin, name);
    cout << "Welcome !! Mr " << name << "in the field of programming";

    return 0;
}
