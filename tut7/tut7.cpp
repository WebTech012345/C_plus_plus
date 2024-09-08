#include<iostream>

using namespace std;

int c = 45;// global variable 

int main(){
    //******Built in datatypes *********
    // int a,b,c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a+b;//local variable
    // cout<<"this is the value of c in local variable:"<<c<<endl;
    //   cout<<"this is the value of c in global variable:"<<::c<<endl;


    //****** Float, double and long double Literals *********



    // float d= 34.4f;//if want to pass it into a function then what is its value if it is float or double 
    // float  d= 34.4;
    // long double e = 34.4 ;
    // // long double e = 34.4L;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;//here bydefult it takes the value of double
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    // cout <<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;

    //****** Refarance variables *********
    // refarance variables are nothing but alias of a variable for example if your name is vamsi krishna and father calls you as vamsi and friends call you ramaiya and teacher call you krishna then vamsi, ramaiya and krishna are refarance variables of vamsi krishna
    // float x = 455;
    // float & y = x;//here we use referance variables
    // cout<<x<<endl;
    // cout<<y<<endl;

//***************** Typecastinng ****************
//typecasting is nothing but changing the type of a variable for example if you want to change the type of int to float then you can do it by typecasting
// typecasting is nothing but changing one datatype to another data type when it is possibleonly

int a = 45;
float b = 45.46;
cout<<"The value of a is "<<a<<endl;

cout<<"The value of a is "<<(float)a<<endl;//here we are typecasting the int to float
cout<<"The value of a is "<<float(a)<<endl;//here we are typecasting the int to float
cout<<"the value of b is "<<b<<endl;
cout<<"The value of b is "<<(int)b<<endl;//here we are typecasting the float to int
cout<<"the value of b is "<<int(b)<<endl;//here we are typecasting the float to int

int c = int(b);//here we are typecasting the float to int
cout<<"The value of c is "<<c<<endl;

cout<<"The expression is "<<a+b<<endl;
cout<<"The expression is "<<a+int(b)<<endl;
cout<<"The expression is "<<a+(int)b<<endl;
    return 0;
}
