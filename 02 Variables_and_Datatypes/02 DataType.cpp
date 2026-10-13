/*
(*) Datatype:-
             --> A data type in C++ defines the type of data a variable can store,
              such as numbers, characters, decimal values, or Boolean values.
             -->Example:
                        int age = 18;
                        float marks = 85.5f;
                        char grade = 'A';

(*) Classification of Datatypes:-
                                -->C++ data types are classified into three main categories:
(1). Fundamental Data Types:-
                        -->These are the basic built-in types provided by C++.
                          int – Integer numbers
                          float – Decimal numbers
                          double – Decimal numbers with greater precision
                          char – Single character
                          bool – True or false
                          void – No value
2. Derived Data Types:-
                      -->These are formed from other data types.
                          Array
                          Pointer
                          Reference
                          Function
3. User-Defined Data Types:-
                           -->These are created by programmers.

                           Example:-  struct,class,union,enum ..etc.


    DataType    Typical Size*	Example Value
    char	    1 byte	        'A'
    bool	    1 byte	        true
    int	        4 bytes	        100
    float	    4 bytes	        3.14f
    double	    8 bytes	        3.14159265
    long long	8 bytes	        1234567890

*/

#include <iostream>
using namespace std;
int main()
{

    int age = 23;
    float height = 154.255f;
    double salary = 45161.621626;
    char grade = 'A';
    bool _isMarried = false;
    bool _isPassed = true;
    cout << "Age is " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Salary is:" << salary << endl;
    cout << "passing with grade  " << grade << endl;
    cout << "Married  " << _isMarried << endl;
    cout << "passed " << _isPassed << endl;

    return 0;
}