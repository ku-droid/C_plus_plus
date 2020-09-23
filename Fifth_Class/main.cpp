//Array :
/*
 * They are compound data types.
 * It allows you to tell the compiler to give 
 * you a collection of as many elements as you want 
 * and give those entire element a single name
 */
 
 //Properties:
 /*
  * ---> Fixed size.
  * ---> Elements are of same type.
  * ---> Stored contiguosly in memory.(memory is allocated as one chunk)
  * ---> Individual element can be accessed by their position or index. 
  * ---> First element is at index 0.
  * ---> Programmers responsibility to handle "Out of bounds"
  */
  
  
// Example:1
  
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//      char greet[]={'H','E','L','L','O'};
//      cout<<"The first letter is:\t"<< greet[0]<<endl;
//      cout<<"The second letter is:\t"<<greet[1]<<endl;
//      //cout<<"The 6th letter is:\t"<<greet[5]<<endl;//warning :array index 5 is past the end of array.
//      return 0;
//  }


// Example 2:

//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//      int marks[]={19,14,15,16,14};
//      cout<<"the second obtained marks is:"<<marks[1];
//      marks[1]=18;
//      cout<<"the updated marks is:"<<marks[1];//elements of array can be updated
//      return 0;
//      
//  }

// Example 3:

//#include<iostream>
//using namespace std;
//int main()
//{
//    int marks[5];
//    cout<<"first marks is :"<<marks[0];   //since array is not assigned with any value it gives garbage value
//}  

//Dimensional Arrays:
/*
 * 1D :series
 * 2D :Matrix
 * 3D :Images
 * */
 
//Multidimensional Arrays:
 /*
  *  Example of 2d Tabular array :
  * Account number  Name    Address    Balance  Phone no
  * 98765469879     Ram     Bhaktapur  1100000  9879813213
  * 05463216544     Hari    Kathmandu  10000    9866162343
  * 
  * */
  
// Scenario:
/*
 * We use array to keep the data of students.
 * But the size of the array is fixed,so we have two option to consider.
 * 1---> Make the array so big that it will fit all records.
 * 2---> Use dynamic array such as Vector.
 */
 
 // Vector:
 /*
  * It is a part of C++ Standard Template Library (STL).
  * Can grow and shrink at execution time.
  * Provides similar syntax and semantics as arrays.
  * It is very efficient.
  * Can provide bounds checking.
  * Also uses various cool features like sort,reverse,find and many more.
  */
  
  //Declaration and initializations.
  /*
   * Can be used after using #include<vector>
   * Can be defined by vector <int> marks(20)
   * 
   * */
