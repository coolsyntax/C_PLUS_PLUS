#include <iostream>

int main()
{
    int x=0;

    if (x==1)
    {
        std::cout << "condition is true" << "\n";
    }
    else
    {
        std::cout << "condition is false" << "\n";
    }
}

/*
    When the contion is found to be true while executing the execution will jump to a
    perticular memory which means everytime a conditional or branch statement is encountered
    it might jump to different location which creates an overhead.
    
    ** use only when neccasary do not overuse it
*/

/*  
    When the condition is being evaluated for eg  if (x) the result will be a bool either true(anything but zero) or
    false(zero)
*/