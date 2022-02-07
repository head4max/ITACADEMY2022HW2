#include <iostream>
#include "../header/sysmessage.h"

namespace hw2_sysm {
    //Enum class Operations {
    //};

    void printMenuNavigation()
    {
        std::cout << "enter '+' and number" << std::endl;
        std::cout << "enter '-' and number" << std::endl;
        std::cout << "enter '*' and number" << std::endl;
        std::cout << "enter '/' and number" << std::endl;
        std::cout << "enter 'p' and number" << std::endl;
        std::cout << "enter 'p2'" << std::endl;
        std::cout << "enter 'p3'" << std::endl;
        std::cout << "enter 'tp'" << std::endl;
        std::cout << "enter 'r' and number" << std::endl;
        std::cout << "enter 'sr'" << std::endl;
        std::cout << "enter 'cr'" << std::endl;
        std::cout << "enter 'lg'" << std::endl;
        std::cout << "enter 'ln'" << std::endl;
        std::cout << "enter 'pi'" << std::endl;
        std::cout << "enter 'sn'" << std::endl;
        std::cout << "enter 'cn'" << std::endl;
        std::cout << "enter 'tg'" << std::endl;
        std::cout << "enter 'snh'" << std::endl;
        std::cout << "enter 'cnh'" << std::endl;
        std::cout << "enter 'tgh'" << std::endl;
        std::cout << "enter 'q' to exit" << std::endl;
        std::cout << "other to zero all numbers" << std::endl;
    }

    void printError()
    {
        std::cout << "wrong numbers for the operation" << std::endl;
    }

    void printMenuItem()
    {
        std::cout << "Enter code of the operation" << std::endl;
    }

    void GetNumber(double& xy)
    {

        std::cout << "Enter the number: " << std::endl;
        std::cin >> xy;
    }

    void printWelcomeMessage()
    {
        std::cout << "Welcome to CALCULATOR!!!" << std::endl;
    }
}
