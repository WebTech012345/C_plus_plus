//these are Built-in data types in C++

#include <iostream>
using namespace std;

int main()
{
    // int a,b;
    // a=4;
    // b=5;
    // or
    // int a= 4;
    // int b = 5;
    // or
    int a = 4, b = 5; // recammended
    float pi = 3.14;
    char c = 'a';
    // char c = 'ab'; (don't use more than one character in char variable)
    bool is_true = true;// in this boolen variable we can use only true or false if it is true then it will print 1 and if it is false then it will print 0
    cout << "this is the value of a " << a << endl;
    cout << "this is the value of b " << b << endl;
    cout << "this is the value of a+b  " << a + b << endl;
    cout << "this is the value of pi " << pi << endl;
    cout << "this is the value of c " << c << endl;

    cout << "this is the value of is_true " << is_true << endl; 
    return 0;
}

// use \n for new line in the code and use << for printing in the code