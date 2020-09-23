//Warnings and errors

//Compiler warnings:(Donot ignore them)
/*
 * Example 1:
 *          #include<iostream>
 *          int main()
 *          {
 *           int guess_num;
 *           std::cout<<guess_num;       (!!!Warning:guess_num is uninitialized)
 *           return 0;
 *          }
 * 
 * Example 2:
 *          #include<iostream>
 *          int main()
 *          {
 *           int guess_num;
 *           guess_num=0;
 *           std::cout<<"Nothing";<<std::endl;  (!!!Warning:variable initialized but not used)
 *           return 0;
 *          }
 * */
 
 //Linker error :(Usually occours when there is a missing library or object file)
 /*
  * Example:
  *         #include<iostream>
  *         extern int A();
  *         int main()
  *         {
  *          std::cout <<A;  (!!! Linker error cant find A)
  *          return 0;
  *          }
  * 
  * */
  
  //Runtime error:(Error that occurs when program is executing)
  /*
   * Types of Runtime error:
   * Divide by zero
   * File not found
   * Out of memory etc...
   * (This can be prevented by Exceptional handling)
   * */
   
   //Logic error:(Errors are the mistakes made by programmers)
   /*
    * Suppose we have a program where a person can check wheather he/she is old enough to have driving liscence.
    *   #include<iostream>
    *   int main()
    *   {
    *    int age;
    *    std::cout<<"Enter your age";
    *    std::cin<<age;
    *    if(age > 18)      (!!Error 18 years cant drive is wrong)
    *    {
    *     std::cout<<"Yes!You can drive";
    *    }
    *   }
    * */
    
    //Keyword:(Vocabulary of any programming language)
    /*
     * C++ has 90 keywords
     * Java has 50 keywords
     * C has 32 keywords
     * python has 33 keywords
     * */
     
     //Identifiers:(These are something which are named by the programmers)
     // main,std etc..
     
     //Operator
     /*
      * Standard operators: + , - , * , /
      * Non Stansdard operator:
      *                         Extraction Operator= <<
      *                         Scope resolution Operator=  ::
      * */
      //Punctuations : ; , "" ,() etc...