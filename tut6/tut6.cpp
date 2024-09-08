//C++ HEADER FILES & OPEARATORSs
// There are two types of header files:
// 1). System header files: It comes with the compiler
#include<iostream>
// 2). User defined header files: It is written by the programmer
// #include"myheader.h" (this will produce an error if myheader.h is no present in the current directory)


using namespace std;


int main(){
int a=4, b=5;

    cout<<"Operators in C++"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    cout<<"the value of a and b is "<<a<<","<<b<<endl;
    // Arithmetic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;// output of integer division is integer
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;// here a++ is post increment operator( in this case first we are printing a value and then we are incresing a  value one time. for example a value is 4   and here i used [cout<<"The value of a++ is "<<a++<<endl;] then it prints a value as 4 but after printing it increase a value to 5)
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;

    //output of an integer will be integer and output of a float will be float

// Assignment operators --> used to assign values to variabless
// cout<<"";
// int a = 3 ,b = 9;
char c = 'r';


//comparison operators


cout<<"The value of a==b is "<<(a==b)<<endl;
cout<<"The value of a!=b is "<<(a!=b)<<endl;
cout<<"The value of a>b is "<<(a>b)<<endl;
cout<<"The value of a<b is "<<(a<b)<<endl;
cout<<"The value of a>=b is "<<(a>=b)<<endl;
cout<<"The value of a<=b is "<<(a<=b)<<endl;
cout<<endl;

// Logical operators
cout<<"following are the logical operators in C++"<<endl;
// && --> Logical and operator (in this case if they both are true then it will be true.)
cout<<"The value of logical and operators  ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
// || --> Logical or operator (in this case if any one of them is true then it will be true.)
cout<<"The value of logical or  operators  ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
// ! --> Logical not operator (in this case if it is true then it will be false and if it is false then it will be true. if the output is 1 then it is true and if the output is 0 then it is false. it prints reverse value of the expression.)
cout<<"The value of logical not operators  !((a==b)) is "<<!((a==b))<<endl;
cout<<endl;


    return 0;
} 