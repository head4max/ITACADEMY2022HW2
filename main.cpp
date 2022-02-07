#include <iostream>
#include "header/math4calculator.h"
#include "header/sysmessage.h"

int main() {
    double x = 0;
    bool is_x_in = false;
    double y = 0;

    std::string opr_code = "pi";

    bool isExit = false;
    hw2_sysm::printWelcomeMessage();
    hw2_sysm::printMenuNavigation();

    while(!isExit)
    {
        if(!is_x_in)
        {
            hw2_sysm::GetNumber(x);
            //std::cin >> x;
            is_x_in = true;
        }
        hw2_sysm::printMenuItem();
        ///press 'q' to exit
        std::cin >> opr_code;

        if(opr_code == "q")
            isExit = true;
        else if(opr_code == "p")
        {
            x = getPi();
        }
        else if(opr_code == "p2" and opr_code.length() == 2)
        {
            x = getSquarePower(x);
        }
        else if(opr_code == "p3" and opr_code.length() == 2)
        {
            x = getCubePower(x);
        }
        else if(opr_code == "tp" and opr_code.length() == 2)
        {
            x = get10Power(x);
        }
        else if(opr_code == "sr" and opr_code.length() == 2)
        {
            x = getSquareRoot(x);
        }
        else if(opr_code == "cr" and opr_code.length() == 2)
        {
            x = getCubeRoot(x);
        }
        else if(opr_code == "ln" and opr_code.length() == 2)
        {
            x = getLn(x);
        }
        else if(opr_code == "lg" and opr_code.length() == 2)
        {
            x = getLog(x);
        }
        else if(opr_code == "sn" and opr_code.length() == 2)
        {
            x = getSin(x);
        }
        else if(opr_code == "cn" and opr_code.length() == 2)
        {
            x = getCos(x);
        }
        else if(opr_code == "tg" and opr_code.length() == 2)
        {
            x = getTgs(x);
        }
        else if(opr_code == "snh" and opr_code.length() == 3)
        {
            x = getSinH(x);
        }
        else if(opr_code == "cnh" and opr_code.length() == 3)
        {
            x = getCosH(x);
        }
        else if(opr_code == "tgh" and opr_code.length() == 3)
        {
            x = getTgH(x);
        }
        else if(opr_code == "+")
        {
            hw2_sysm::GetNumber(y);
            x = getPlus(x,y);
        }
        else if(opr_code == "-")
        {
            hw2_sysm::GetNumber(y);
            x = getMinus(x,y);
        }
        else if(opr_code == "*")
        {
            hw2_sysm::GetNumber(y);
            x = getMultiply(x,y);
            is_x_in = true;
        }
        else if(opr_code == "p")
        {
            hw2_sysm::GetNumber(y);
            x = getPower(x,y);
            is_x_in = true;
        }
        else if(opr_code == "pi" and opr_code.length() == 2)
        {
            x = getPi();
        }
        else if(opr_code == "r")
        {
            hw2_sysm::GetNumber(y);
            x = getRoot(x,y);
            is_x_in = true;
        }
        else if(opr_code == "/")
        {
            hw2_sysm::GetNumber(y);
            if(y == 0)
            {
                hw2_sysm::printError();
                is_x_in = false;
            }
            else{
                x = getDivide(x,y);
                is_x_in = true;
            }
        }
        else
            is_x_in = false;

        if(!isExit)
            std::cout << " = " << x << std::endl;
    }

    return 0;
}
/* plus
 * minus
 * multiply
 * divide
 * log
 * ln
 * exp
 * pi
 * x^y
 * x^2
 * x^3
 * 10^x
 * y-level sqrt x
 * 3-level sqrt x
 * 2-level sqrt x
 * mod
 * exp
 * pi
 * sin
 * cos
 * tg
 * sinh
 * cosh
 * tgh
 *
 */