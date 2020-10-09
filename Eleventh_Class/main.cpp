//Dynamic Memory Allocation(DMA):
/*
 * Performing memory allocation manually by the Programmers.
 * C++Memory is divided into two parts: Stack and Heap.
 * 
 * Stack: All the variables declared inside the function will take memory from the stack.
 * Heap: Here,Dynamic Memory Allocation concept starts or initialize.
 * Unused memory of the Program can be used to allocate the Memory Dynamically.
 */
 
 //Applications:
 /*
  * If we define an array of variable length ,DMA helps the programmer.
  * Provides flexibility to the Programmer.(programmer are free to allocate the memory whenever required).
  * Pointer assists in Dynamic Memory Allocation for the Programmers.
  * In c++ new and delete operators helps in DMA.
  */ 
  
  //Different from Traditional Memory Allocation:
  /*
   * If we define the variable in traditional way,memory is automatically allocating or dellocated.
   * For dynamically allocated memory ,It is the programmers responsibility to allocate and dellocate the memory.:
   */
   
   //Memory Leak:
   /*
    * Memory is not dellocated until the Program terminates.
    * */
  
  //Syntax for New Operator.
    /* pointer variable =new data type*/
    //Example:
    /*
     * int *p =NULL;
     * p=new int;         //Request memory for the new variable.
     * 
     * Syntax for delete operator:
     * delete pointer variable;
     * delete p;      //release memory pointed by variable.
     */
     
     
     //DMA
    /*  Types:
    * ---> static(fixed memory size)
    * ---> Dynamic(size can be extended)
    * For DMA pointer is crucial.
    */
       
    //Allocation memory
    /*
        * It creat dynamic space.
        * storing the address in pointer
        * */
       
       //Allocation using new:
       /*
        * to use the space dynamically ,use the unary operator new,followed by the type being allocated
        * new int;    //dynamically allocates int
        * new double; //dynamically allocates double
        


         * new int[40];//dynamically allocates an array of 40 ints
         * new double[size];//that the size can be variable.
          
         * int *p;//declare pointer (p=121[484H])
         * p= new int;//dynamically allocates an int and load address into p.
         * 
         * double *d;       //declare a pointer d
         * d=new double;    //dynamically allocates a double and load address int d.
        * */
        
        
    //We can also do these in single line statements
    /*
     * int x=40;
     * int *list=new int[x];
     * float *numbers =new float[x+10];
     * this is also a one more way of initializing created space
     * */
     
     
     //Acessing the dynamically created space
     /*
      * int *p =new int;         //pointed to p
      * *p=10;                  //assigns 10 to the dynamic integer;
      * cout<<*p ;              //prints 10
      * */
      
      
      //array
      /*
       * double *numlist =new double [size] //dynamic array
       * for(int i=0;i<isze;i++)
       * numlist[i]=0 //initialize array elements to 0;
       * 
       * numlist[5]=10;   //bracet notation
       * *(numlist +7)=15; //pointer-offset notation
       *                   //means same as numlit[7]=15
       * */
       
       
       
       
       //Deallocation (free or delete) of dynamic memory
       /*
        * int *ptr =new int;   //dynamically created int
        * ------
        * ------
        * delete ptr;          //delete the space that ptr points to 
        * */
      
      
//Examples

//#include<iostream>
//
//int main()
//{
//    double *pvalue{NULL};    //pointer initialized with NULL
//    pvalue = new double;    //Request memory for the variable
//    *pvalue =3213131.6489;  // store value allocated address.
//    std::cout<<"Value of pvalue"<<*pvalue <<std::endl;
//    
//    delete pvalue;
//    std::cout<<"Value of pvalue"<<*pvalue <<std::endl;
//    
//}

//
//#include<iostream>
//int main()
//{
//    int len,sum=0;
//    std::cout<<"Enter the number of student in the class" <<std::endl;
//    std::cin>>len;
//    int *marks =new int[len];//DMA
//    std::cout<<"Enter the marks of each students "<<std::endl;
//    
//    for(int i=0;i<len;i++)
//    {
//        std::cin>> *(marks+i);
//        sum=sum + *(marks +i);   //sum =sum +*(marks +i)
//    }
//    std::cout<<"Sum is "<<sum <<std::endl;
//    return 0;
//}