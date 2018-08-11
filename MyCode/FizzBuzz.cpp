#include <iostream>

int main()
{
    //My quick answer. Could use endl if you want a cleaner look
    for(int i = 1; i < 100; ++i)
    {
        if( (i % 3 == 0) && (i % 5 != 0) ) //If divisible by 3
        {
            std::cout << "Fizz ";
        }
        else if( (i % 3 != 0) && (i % 5 == 0) )
        {
            std::cout << "Buzz ";
        }
        else if( (i % 3 == 0) && (i % 5 == 0) )
        {
            std::cout << "FizzBuzz ";
        }
        else
        {
            std::cout  << i <<" ";
        }
    }

    // I could have nested a check for divisible by five under the check for divisible by 3

    return 0;
}
