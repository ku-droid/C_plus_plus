// Pass-by-reference
/*
 *  Sometimes we want to be able to change actual parameters from within the function body.
 *  inplace = True  :dataframe.drop(inplace = True)
 *  in order to achieve this we need the location or address of the actual parameters.
 *  Formal parameters will be an alias for the actual parameters.
 */
 
 
// Example -> 1:
 
// #include<iostream>
// using namespace std;
// void scale_number(int &num);  //Prototype
// int main()
// {
//     int number={1000};
//     cout<<"Before :"<<number<<endl;
//     cout<<"After :"
//     scale_number(number);      //Function call
//     cout<<number <<endl;       //100
//     
//     return 0;
// }
// 
// void scale_number(int &num)    //Defination
// {
//     if(num>100)
//         num=100;
// }


// Example -> 2:

//#include<iostream>
//using namespace std;
//void swap(int &a,int &b);
//int main()
//{
//    int x={10},y={20};
//    cout<<x<<" "<<y<<endl;
//    swap(x,y);
//    cout<<x<<" "<<y<<endl;
//    return 0;
//}
//
//void swap(int &a,int &b)
//{
//    int temp =a;
//    a=b;
//    b=temp;
//}

// Example -> 3:
//#include<vector>
//#include<iostream>
//using namespace std;
//void print(vector<int> &v);
//
//int main()
//{
//    vector<int>data{1,2,3,4,5};
//    print(data);
//    return 0;
//}
//void print(vector <int> &v)
//{
//    int t=10;
//    for (auto num:v)
//        cout<<num+t<<endl;
//    cout<<endl;
//}


// How the function works :

/*
 * Function use the "function call stack "
 * ---> Analogous to a stack of books.
 * ---> LIFO : Last in first out
 * ---> Push and pop
  
 *  StackFRame or Activation Record(each time a funtion is called activation record is created and pushed in a stack )
 *  When the function terminates we pop its activation record off the call stack .
 *  A function must return control.
 */
 
// #include<iostream>
// using namespace std;
// void funct2(int &x,int y,int z)
// {
//     x+=y+z;
// }
// int funct1(int a,int b)
// {
//     int result={};
//     result =a+b;
//     funct2(result,a,b);
//     return result;
// }


// int main()
// {
//     int x={10};
//     int y={20};
//     int z={};
//     
//     z=funct1(x,y);
//     cout<<z<<endl;
// }


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
