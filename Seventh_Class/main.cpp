//Prototype:
/*
 * Tells the compiler about function before it is used.
 * Also called a forward declaration.
 * Placed at the begining of the program.
 */
 
 
//Example of prototyping

// #include<iostream>
//using namespace std;
//const double pi={3.14159};
//
//double func_calc_area_circle(double);              --->(These are prototypes)
//double func_calc_area_cylinder(double,double);
//void area_circle();
//void area_cylinder();
//void area_rect();
//double func_calc_area_rect(double,double);
//
//int main()
//{
//    area_circle();
//    area_cylinder();
//    area_rect();
//    return 0;
//}
//double func_calc_area_circle(double radius)
//{
//    return pi*radius*radius;
//}
//
//void area_circle()
//{
//    double radius ={0};
//    cout<<"Please enter the radius of circle"<<endl;
//    cin>>radius;
//    cout<<"The area of circle is :"<<func_calc_area_circle(radius)<<endl;
//}
//double func_calc_area_cylinder(double radius,double height)
//{
//    return pi*radius*radius*height;
//}
//void area_cylinder()
//{
//    double radius{0};//Brace initialization
//    double height={0};//Copy Brace initialization
//    cout<<"please enter the radius of cylinder"<<endl;
//    cin>>radius;
//    cout<<"Please enter the height of cylinder"<<endl;
//    cin>>height;
//    cout<<"The area of the cylinder is :"<<func_calc_area_cylinder(radius,height)<<endl;
//    
//}
//double func_calc_area_rect(double length,double bredth)
//{
//    return length*bredth;
//}
//void area_rect()
//{
//    double length={0};
//    double bredth={0};
//    cout<<"please enter the length of rectangle"<<endl;
//    cin>>length;
//    cout<<"please enter the bredth of rectangle"<<endl;
//    cin>>bredth;
//    cout<<"The area of rectangle is "<<func_calc_area_rect(length,bredth)<<endl;
//}

//Function Parameters
/*
 * When we call a function we pass in some data to that function.
 * In the function call these parameters are called Actual Parameters i.e Arguments.
 * In the function defination these parameters are called Formal parameters i.e Parameters.
 */
 
 //Example:
// #include<iostream>
// using namespace std;
// int add_numbers(int ,int);//Function prototype
// int main()//Main starts
// {
//     int result{0};
//     result = add_numbers(100,200);
//     cout<<result <<endl;
//     return 0;
// }
// int add_numbers(int a,int b)//function defination
// {
//     return a+b;
// }

//Pass-by-value:
/*
 * When you pass data into a function it is passed-by-value.
 * A copy of data is passed to the function.
 * Whatever changes youu make to the parameters in the functions doesnot affects the argument that was passed in.
 */
 
// //Example:
// #include<iostream>
// using namespace std;
// void param_test(int x)
// {
//     cout<<x<<endl;
//     x=100;
//     cout<<x<<endl;
// }
// int main()
// {
//     int A{50};
//     cout<<A<<endl;
//     param_test(A);
//     cout<<A<<endl;
//     return 0;
// }
// 

//Example using all of above

//#include<iostream>
//#include<vector>
//using namespace std;
//
//void pass_by_value1(int num);
//void pass_by_value2(string s);
//void pass_by_value3(vector<string>v);
//
//
//void pass_by_value1(int num)
//{
//    num=1000;
//}
//void pass_by_value2(string s)
//{
//    s="Changed";
//}
//void pass_by_value3(vector<string>v)
//{
//    v.clear();
//}
//void print_vector(vector<string>v)
//{
//    for(auto s:v)
//        cout<<s<<" ";
//        
//}
//int main()
//{
//    int num={10};
//    int another_num{20};
//    cout<<"Number before calling the pass_by_value1"<<num<<endl;
//    pass_by_value1(num);
//    cout<<"After calling the pass_by_value1"<<num<<endl;
//    
//    cout<<"Before"<<another_num<<endl;
//    pass_by_value1(another_num);
//    cout<<"After"<<another_num<<endl;
//    
//    string name={"Superman"};
//    cout<<"Before"<<name<<endl;
//    pass_by_value2(name);
//    cout<<"After"<<name<<endl;
//    
//    vector<string>AAL{"Tosin","Javier","Matt"};
//    cout<<"Before"<<endl;
//    print_vector(AAL);
//    cout<<endl;
//    pass_by_value3(AAL);
//    cout<<"After"<<endl;
//    print_vector(AAL);
//    cout<<endl;
//    
//    
//    
//    return 0;
//}




