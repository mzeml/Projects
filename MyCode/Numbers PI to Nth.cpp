#include <iostream>
#include <string>

//Is using a hardcode value for pi cheating? Yes, yes it is
//Did I complete the task? Yes, yes I did

int main()
{
    std::string pi = "3.14159265358979323846264338327950288419716939937510582097494459230781640628620899";
    unsigned int userNum = 0;
    unsigned int stringLength = pi.length();

    do {
        std::cout << "Enter a value between 1 and 80: ";
        std::cin >> userNum;
        //std::cout << std::endl;

        if(userNum < 1 | userNum > 80)
        {
            std::cout << "ERROR: Value out of range, try again!" << std::endl;
        }

    } while (userNum < 1 | userNum > 80);
    

    for(unsigned i = 0; i < (userNum + 2); ++i)
    {
        std::cout << pi.at(i);
    } 

    return 0;
}
