// Functions :DRY (Donot repeat yourself) 


// Function defination:

/* 
 * C++ Standard library(Functions and classes) Eg. iostream and Vector
 * Third party library (Functions and classes)   Eg. Gaming:- cocos2Dx,Unreal,Spring,Cry Engine
 * User defined function and classes (which is our own)
*/

//Abstraction(one of the fundamental principal in Software Engineering)
/*compression of lengthy code to modularized one for easier management and understanding*/

/* lengthy
int main()
{
    //read inputs
    statement 1;
    statement 2;
    statement 3;
    //Process inputs
    statement 1;
    statement 2;
    statement 3;
    //Generate outputs
    statement 1;
    statement 2;
    statement 3;
}
 */
/*
Modularized code:(abstracted one)
//read inputs
read_input();
//process inputs
process_input();
//generate outputs
generate_outputs();    

*/

//In-built Function (using functions form the libraries)
/*
#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int main()
{
    double num={0};
    cout<<"Enter the number:"<<endl;
    cin>>num;
    cout<<"The square root is :"<<sqrt(num)<<endl;
    cout<<"The cube root is :"<<cbrt(num)<<endl;
    cout<<"The ceiling of the function is "<<ceil(sqrt(num))<<endl;
    cout<<"The floor of the function is "<<floor(sqrt(num))<<endl;
    cout<<"The absolute value is "<<fabs(sqrt(num));
}
*/

//User-defined function(creating our own function):
/*
 *  Naming a userdefined function:
 * ---> Same rule as variables.
 * ---> Should be meaningful.
  
 *  Parameter list:
 * ---> The variable passed into the function
 * ---> Their type must be specified
  
 * Return type:
 * ---> The type of the data thatis returned from the function.
  
 * Body:
 * ---> That statements that are executed when the function is called.
 * ---> Within {} braces.
 */
 
 //Syntax of function
/*Type Function_name(Type of parameters should be specified)
 * {
 *      statements;
 *      return type;
 * }
 */
 
 //Examples:
// #include<iostream>
// using namespace std;
// void say_world()
// {
//     cout<<"World"<<endl;
// }
// void say_hello()
// {
//     cout<<"Hello ";
//     say_world();
// }
// int main()
// {
//     say_hello();
//     return 0;
// }



// Prototyping

//Example ( Area of circle and area of cylinder)
#include<iostream>
using namespace std;
const double pi={3.14159};

double func_calc_area_circle(double radius)
{
    return pi*radius*radius;
}

void area_circle()
{
    double radius ={0};
    cout<<"Please enter the radius of circle"<<endl;
    cin>>radius;
    cout<<"The area of circle is :"<<func_calc_area_circle(radius)<<endl;
}
double func_calc_area_cylinder(double radius,double height)
{
    return pi*radius*radius*height;
}
void area_cylinder()
{
    double radius{0};//Brace initialization
    double height={0};//Copy Brace initialization
    cout<<"please enter the radius of cylinder"<<endl;
    cin>>radius;
    cout<<"Please enter the height of cylinder"<<endl;
    cin>>height;
    cout<<"The area of the cylinder is :"<<func_calc_area_cylinder(radius,height)<<endl;
    
}
double func_calc_area_rect(double length,double bredth)
{
    return length*bredth;
}
void area_rect()
{
    double length={0};
    double bredth={0};
    cout<<"please enter the length of rectangle"<<endl;
    cin>>length;
    cout<<"please enter the bredth of rectangle"<<endl;
    cin>>bredth;
    cout<<"The area of rectangle is "<<func_calc_area_rect(length,bredth)<<endl;
}

int main()
{
    area_circle();
    area_cylinder();
    area_rect();
    return 0;
}




