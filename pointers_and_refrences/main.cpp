// pointers are address variables
// used to access data indirectly
// heap data can be accessed by pointers
// other sources can be accessed using pointers like internet , moniter ,etc
// stack memory can be accessed directly by program whereas to access heap memory we need pointers
// used in parameter passing

// pointers are integers that holds address "period"


#include <iostream>

int main()
{
    int a = 10;
    int* p;
    p = &a;                              // & is (address of) (refernece) operator
    std::cout << *p << std::endl;        // * is ( value at) (dereferncee) operator
    
    // references cannot be reassigned to another variable if you try to do so 
    // you will end up assigning the value

    int b = 5;
    int& ref = b;   // we have created an alias for b
                    // references are used to create alias
                    // refer to functions to know how to use references in function

    /*
    declaring memory on heap in c
    #include <stdlib.h>
    main()
    {
       int *p ;
       p = (int*)malloc(size * sizeof())
    }
    */
    
    // 'new' keyword is used in c++ to declare memory on heap
    // 'delete' keyword is used in c++ to delete memory on heap
    /*
    declaring memory on heap in c++

    p = new int[5];
    delete p[];

    */
    
    std::cin.get();
}
