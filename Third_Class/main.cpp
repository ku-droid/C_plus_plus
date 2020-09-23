//C++ Preprocessor

/*
 * It is a program that processes all the source code before the compiler sees the code.
 * The processes includes:
 *              First it removes all the comments and replaces it with a space.
 *              Then it looksfor the preprocessor directives and executes them.
 *              C++ preprocessor doesnot understand C++
 * */
 
 
 //Preprocessor Directives;
 /*
  * Preprocessor Directives are the lines in the source code begins with #
  * Wheen the compilersees the source code all the comments are removed and preprocessor directives are processed.
  * */
  
  //Comment:
  /*
   * We have two types of commenting styles :
   * Single line comment:(we use double slash //)
   * multiline comments :(we use slash(/) astrick(*).. comments.. astrick(*) slash(/) )
   */
        //Example
        /*
         * Dependancies:
         * Tensorflo
         * Keras
         * Matplotlib
         * Pandas
         * */
         
//namespace()
/*
 * Helps in removing word conflicts
 * Eg :
 *      #include<iostream>
 *      int main()
 *      {
 *       std::cout<<"Pleaseenter a number";
 *       std::cin>>cout;                   (namespace is helping us use cout as variable even though it is identifier in standard(std) namespace)
 *       std::cout<<"The number is "<<cout ;
 *       return 0;
 *      }
 * 
 *  Eg:
 *      #include<iostream>
 *      int main()
 *      {
 *       int num;
 *       std::cout<<"Pleaseenteranumber";
 *       std::cin>>num;
 *       std::cout<<"The number is ";<<num; (namespace can also be used like this )
 *  Eg:
 *      #include<iostream>
 *      using std::cout;
 *      using std::cin;
 *      using std::endl;
 *      int main()
 *      {
 *       int num;
 *       cout<<"Please enter a number";
 *       cin>>num;
 *       cout<<"The number is "<<num;
 *       return 0;
 *      }
 * */
 
 // Cout and Cin
 /*
  * #include<iostream>
  * using namespace std;
  * int main()
  * {
  *  cout <<Hello world"<<endl;  (Prints Hello world)
  *  cout <<"Hello";
  *  cout <<" world";   (using space before world prints Hello world)
  *  cout<<"Hello" <<"/tworld" (using /t tabs the word, prints: Hello    world)
  *  cout<<"Hello \n out \n there";(using \n (next line)prints Hello
                                                                out
                                                                there)
  * */
  
  //Example using integers and double
/*
 * #include<iostream>
 * int main()
 * {
 *  int num1;
 *  int num2;
 *  double num 3;
 *  cout<<"Enter num1";
 *  cin>>num1;
 *  cout<<"Enter num2";
 *  cin>>num2;
 *  cout<<"Enter num3";
 *  cin<<num3;
 * 
 *  cout<<"You entered"<<num1 <<num2 <<num3 <<endl ;
 * (here if u insert all the variables with decimals only num3 can print small decimals since others data types are integer except num3)
 * */ 
 