//Variables:
/*Allows programmer to use meaningful names but not the memory address.
 * Variables have :
 *                  Type --->(int ,String,Person Account)
 *                  Value--->(10,3.14,"Hari")
 * "VariableType and VariableName" int num;
 * Variables must be declared.
 * Declaring and initializing ,int num =10;
 * */
 
 //Rules for naming variables
 /*
  * Can contain letters, numbers and underscores
  * Must begain with a letter to underscore(_).
  * Cannot begain with numbers
  * Cannot use c++ reserved keywords. 
  * C++ is case sensitive.
  * Cannot redeclare a name in the same scope.
  * 
  * Can:        Age,age,_age,My_age,INT
  * Cannot:     int, $age, 2020_age, my age, return
  * 
  * */
  
  //initializing variables:
  /*
   * int age;           (uninitialized variable)
   * int age = 21;      (C like initialization)
   * int age (21);      (Construction initialization)
   * int age {21};      (C++11 initialization)
   * */
   

//#include<iostream>
//using namespace std;
//int main()
//{
//    int width{0};
//    int height{0};
//    cout<<"Enter the Room width(in Sq ft):";
//    cin>>width;
//    cout<<"Enter the Room height(in sq ft):";
//    cin>>height;
//    
//    cout<<"The area of the Room is :"<<width*height<<"sq.ft."<<endl;
//    return 0;
//}

//C++ Primitive data types(Fundamental data types)
/*
 * Character Types
 * Integer Type         :(Signed and unsigned)
 * Floating-point Type
 * Boolean Type
 * */
    
//Character Type:
/*
 * Used to represent single character 
 * Example
 *      'A','X', '@',
 *      char,char16_t etc.
 * */
 
 //Integer Type:
 /*
  * Used to represent whole numbers .int ,long ,long long,short
  * Two types:
  *             Signed and Unsigned
  *                 Unsigned --->(0 and positive value only) need to specify
  *                              (unsigned short,unsigned)
  *                 Signed    --->:No need to specify
  * */
  
  //Floating-point Type:
  /*
   * Used to represent non-integer number
   * Float(7 decimal)
   * Double(15 decimal)
   * Long double(19 decimal)
   * */
   
   //Boolean Type :
   /*
    * Used for represent True and False .(Zero for False,Non Zero for True)
    */
    
    //Constant
    /*
     * Like variables ,also have names,also occupies space.
     * Which doesnot need to be changed in the program i.e remains same throughtout the program
     * */
     // Type of constant:
     /*
      * Literal Constant:
      *     Eg: x=12, y=1.5,name ='Hari'
      * 
      * Declared Constant:
      *      is defined using 'const' keyword (eg: const int month_in_year {12};)
      * 
      * Enumerated Constant:
      *       enum Keyword
      * 
      * Constant Expression:
      *        const expr Keyword
      * 
      * Define Constants
      *         eg:(#define pi 3.1415)
      * */