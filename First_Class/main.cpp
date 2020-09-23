#include<iostream>
int main()
{
    int guess_num;
    std::cout<<"Please guess a number from 1 to 10 :";
    std::cin>>guess_num;
    std::cout<<"The number is "<<guess_num <<std::endl;
    return 0;
}


//Keywords,operators,identifiers,punctuation used in above code:
/*
 * #            ---> Pound sign,it is used only to make code pretty.
 * include      ---> Way of including a standard library or user-defined file in a program. 
 * <iostream>   ---> Defines the standard input/output stream of objects,Eg: Cout ,Cin,Cerr.
 * main()       ---> It is the function which is called when program is executed .The execution of cpp file begins from here,
 * std          ---> (standard) std is a nampspace in which Cin and Cout is defined.
 * cout         ---> standard output stream
 * endl         ---> ends line
 * prompt       ---> Message that is shown to the user.
 * Cin          ---> standard input stream
 * <<           ---> insertion operator,Helps in inserting values in the program .
 * >>           ---> extraction operator,Grabs the value that user has entered.
 * guess_num    ---> variable (It is a box)
 * int          ---> Datatype
 * return       ---> Returns a value for main().
 * "...."       ---> Takes string value.
 * '....'       ---> Takes character value.
 * */
 
 
 //Compiler error:
 
 
 /*Syntax error: Error which occurs when code is entered incorrectly.it wont compile
  *     For eg:
  *             #include<iostream>
  *             int main()
  *             {
  *                 std::cout >>"WOAH";(extraction operator instead of input operator)
  *                 reutrn 0;
  *             }
 */
 
 /*Symentic error: Error which compiles but have no meaning
  *     For eg:
  *             #include<iostream>
  *             int main()
  *             {
  *                 return 0;(code ends here so codes below won't run)
  *                 std::cout<<"Enter anything";
  *             }
  * */          