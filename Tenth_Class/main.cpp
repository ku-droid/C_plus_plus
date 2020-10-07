// Inline Function:
/*
 *  Function call have certain amount of overhead .
 *  In this situation we can suggest compiler to compile  the simple function inline
 *  -Avoids function call overhead.
 *  -Generate inline assembly code
 *  -Faster
 *  -Could cause code bloat
 * */
 
 
 //Example Inline function
 
// #include<iostream>
// inline int add_numbers(int a,int b)
// {
//     return a+b;
// }
// int main()
// {
//     int result{0};
//     result =add_numbers(100,200);
//     std::cout <<result;
//     return 0;
// }
// 
 
 
 //Scope Rules:
 /*
  * C++ uses scope rules to determine where an identifier can be used.
  * C++ uses static or lexical scoping .
  * Local or block scope/Global scope
  * */
  //Local/Global scope:
  /*
   * Identifiers declared in a block : {}
   * Function parameters have blockscope.
   * only visible within the block {} wgere deckared,
   * Function local variables are only active while the function is executing.
   * Local variables are NOT preserved between the function calls.
   * With the nested block inner blocks can 'see' but outer block cannot 'see' in.
   * */
   
   
   
   //Global scope:
   /*
    * Identifier declared outside any function/class.
    * Visible to all part of the program afterglobal Identifier has been declared.
    * Global constants are OK.
    * Try not to use variables as global.
    */
    
    
    //Pointers:
    /*
     * Pointer is a variable whoose value is an address.
     * The address can contain another variable or a function.
     * If x is an integer variable and its value is 10. Then we can declare a pointer of same type that points to it.
     * To use the data that the pointer is pointing to you must know its type.
     */
     
    // Why cant we use the variable or function itself?
    /*
     * We can use but not always like in,
     * -Inside functions,Pointer can be used to access data that are defined outside the function.
     * -Pointers can be used to operate on arrays very efficiently.
     * -We can allocate memory dynamically on the heap of free space during runtime.
     */
     
     
     //Declaring pointer variable,
     /*
      * variable_type *pointer_name;
      * Eg: int *int_ptr;                           //uninitialized pointer.
      *     double *double_ptr;
      *     char *char_ptr;
      *     string *string_ptr;
      */
       
       
       //Initialization of pointer.
       
      /* It is very important to initialize a pointer.
      *     variable_type *pointer_name{nullptr}'   //initialized pointer
      *     double *double_ptr{nullptr};
      *     char *char_ptr{nullptr};
      *     string *string_ptr{nullptr};
      * 
      * Always initialize the pointe_safety-uninitialized pointercontains garbage data can point anywhere.
      * initializing to zero or nulptr represents address zero.
      */
      
      
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int num={10};
    cout<<"value of the num" <<num <<endl;
    cout<<"size of the num"<<sizeof num<<endl;
    cout<<"address of num is "<<&num <<endl;
    
    int *p;
    cout<<"value of p is " <<p <<endl;
    cout<<"Address of p is "<<&p <<endl;
    cout<<"size of p is "<<sizeof p<<endl;
    
    int *r{nullptr};
    cout<<"value of r is "<<r <<endl;
    cout<<"Address of r is "<<&r <<endl;
    cout<<"size of r is "<<sizeof r <<endl;
    
    int*p1={nullptr};
    double *p2={nullptr};
    vector<string> *p3 ={nullptr};
    string *p4={nullptr};
    
    cout<<"size of p1   :"<<sizeof p1<<endl;
    cout<<"size of p2   :"<<sizeof p2<<endl;
    cout<<"size of p3   :"<<sizeof p3<<endl;
    cout<<"size of p4   :"<<sizeof p4<<endl;
    
    
    int score={10};
double temp{100.7};
int *score_ptr ={nullptr};
score_ptr=&score;

cout<<"value of score is "<<score<<endl;
cout<<"address of scoreis :"<<&score<<endl;
cout<<"value of pointer is :"<<*score_ptr <<endl;

    
}      
    
  
