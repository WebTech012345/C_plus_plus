// local scope
// global scope
//these are Built-in data types in C++
#include<iostream>
using namespace std;

int global = 10; // this is a global variable because it is declared outside of any function

void sum(){
    int a;

    cout<<"Global variable: "<<global<<endl; // in the function if we don't have a local variable with the same name as the global variable then the global variable will be used

} // this is a function
// the scope of a variable is the part of the program where the variable is accessible

int main(){

    int global = 20; // this is a local variable because it is declared inside of a function

    global = 30;// here it has higher priority then upper one 


sum();// this is a function call
    cout<<"Global variable: "<<global<<endl;
    return 0;
}