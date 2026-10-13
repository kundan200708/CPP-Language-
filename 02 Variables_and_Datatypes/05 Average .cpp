// Wap to find  average marks if a student ?
#include <iostream>
using namespace std;
int main()
{
    float maths, physics, chemistry, avg;
    cout << "Enter the marks of maths ,physics and chemistry marks respectively";
    cin >> maths >> physics >> chemistry;
    avg = (maths + physics + chemistry) / 3;

    cout <<"Average marks is:"<<avg<<endl;
    return 0;
    
}