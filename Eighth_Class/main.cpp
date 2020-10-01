// Return statement:
/*
 * If a function returns a value then it must use a return statement that returns a value.
 * If a function doesnot return a value (void) then the return statement is optional.
 * return statement can occur anywhere in the function body.
 * return statement immediately exists the fuction.
 * multiple return is usually not encouraged.
 * The return value is the result of the function call.
 */
 
 // Default parameters (Arguments)
 /*
  * This value remains constant throughout
  * Default value can be in prototype or defination or both
  * Best practices :use default value in prototype.
  * must appear at the tail end of parameters list.
  * can also have multiple default value.
  */
  
// Example:

//  #include<iostream>
//  using namespace std;
//  int cost_total(int price,int tax=13);//int tax =13, here tax =13 is default parameter
//  int cost_total(int price,int tax)
//  {
//      return price+=(price*tax);
//  }
//  int main()
//  {
//      int price={10};
//      cout<<"The actual price is :"<<price<<endl;
//      cout<<"The purchased price is :"<<cost_total(price)<<endl;
//  }

// Overloading function :
/*
 * We can have function that have different parameters list that have same name.
 * OOP featrures (Abstraction,Polymorphism)
 */
 
// Example:

//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//void print(int);
//void print(double);
//void print(string);
//void print(string,string);
//void print(vector<string>);
//
//void print(int num)
//{
//    cout<<"Printing integer"<<num<<endl;
//}
//void print(double num)
//{
//    cout<<"Printing double"<<num<<endl;
//}
//void print(string s)
//{
//    cout<<"Printing  string"<<s<<endl;
//}
//void print(string s,string t)
//{
//    cout<<"Printing 2 strings"<<s<<" and "<<t<<endl;
//}
//void print(vector<string>v)
//{
//    cout<<"Printing vector of strings";
//    for (auto s:v)
//        cout<<s +" ";
//}
//int main()
//{
//    print(100);
//    print('A');
//    print(101.10);
//    string s=("C-style string");
//    print(s);
//    print("C-style string",s);
//    vector<string> GOT{"Stark","Bolton","Lennister"};
//    print(GOT);
//    cout<<endl;
//    return 0;
//}
