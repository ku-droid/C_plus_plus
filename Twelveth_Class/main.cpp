// Passing pointer to a function:

/*
 * We can use pointers and the dereference operateor to achieve pass by reference.
 * Function parameters is a pointer.
 * Actual parameter can be a pointeror address of the variable.
 */
 
 //Passing pointer to a function
 
// 
// #include<iostream>
// using namespace std;
// 
// void swap(int *a,int *b)
// {
//     int temp =*a;
//     *a =*b;
//     *b=temp;
// }
// int main()
// {
//     int x {100},y {200};
//     cout<<"x :"<<x<<endl;
//     cout<<"y :"<<y<<endl;
//     
//     swap(&x,&y);
//     
//     cout<<"x :"<<x<<endl;
//     cout<<"y :"<<y<<endl;
//     cout<<endl;
//     return 0;
// }
// 
// 
// 


#include<iostream>
using namespace std;

int *create_array(size_t size,int init_value =0)
{
    int *new_storage{nullptr};
    new_storage =new int [size];
    for(size_t i{0};i<size;++i)
        *(new_storage + i) = init_value;
    return new_storage;
}

void display(const int *const array,size_t size)
{
    for(size_t i{0}; i<size;++i)
        cout<<array[i]<<" ";
    cout <<endl;
}

int main()
{
    int *my_array{nullptr};
    size_t size;
    int init_value={};
    cout<<"\n How many integers would you like to allocate?";
    cin>>size;
    cout<<"What value would you like them initialized to ?";
    my_array = create_array(size,init_value);
    
    display(my_array,size);
    delete[] my_array;
    return 0;
}