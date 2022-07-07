// function has its own stack frame or activation code
// function cannot access variables in other functions

#include <iostream>

int add(int x, int y)     // data_type function_name(formal_parameters)  (function declaration)
{
    int z = x + y;
    return(z);
}

void swap(int x, int y)            // pass by value syntax
{
    int temp = x;
    x = y;
    y = temp;
    std::cout << x <<" "<< y << std::endl;
}

void swap1(int* x, int* y)         // pass by address syntax
{
    int temp = *x;
    *x = *y;
    *y = temp;
    std::cout << *x << " " << *y << std::endl;
}

void swap2(int& x, int& y)         // pass by reference syntax
{
    int temp = x;
    x = y;
    y = temp;
    std::cout << x << " " << y << std::endl;
}

int main()
{
    int a = 6;
    int b = 5;
    int c = add(a, b);               // function call,  function_name(actual_parameters);
    std::cout << c << std::endl;

    // pass by value  (swap)

    swap(a, b); 
    std::cout << a << " " << b << std::endl;

    /* when using pass by value actual parameters get copied to formal parameters
       any modification to be done happens in formal parameters and does not have any 
       effect on actual parameters i.e. their value remain same
    */

    // pass by address  (swap1)

    swap1(&a, &b);
    std::cout << a << " " << b << std::endl;

    /*
        uses pointers
        any modification on formal parameters(pointers) reflect on actual parameters
        formal parameters work on adress of actual parameters
        address of actual parameters is passed instead of value of actual parameters
    */

    // call by reference    (swap2)

    swap2(a, b);
    std::cout << a << " " << b << std::endl;

    /*
        similar to call by value
        do not take extra memory 
        work on memory of actual parameters
        references are nothing but alias for a variable

    */


    std::cin.get();
}
