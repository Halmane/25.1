#include <iostream>
#include "Operation.h"

struct instruments
{
    std::string scalpel = "scalpel";
    std::string hemostat = "hemostat";
    std::string tweezers = "tweezers";
    std::string suture = "suture";
};

int main()
{
    instruments instruments;
    scalpel;
    while (checking_operation_status == 0)
    {
        std::cout << "Enter the name of the instrument: ";
        std::string instrument;
        std::cin >> instrument;
        if (instrument == instruments.scalpel)
        {
            scalpel;
        } else if (instrument == instruments.hemostat)
        {
            hemostat;
        } else if (instrument == instruments.tweezers)
        {
            tweezers;
        } else if (instrument == instruments.suture)
        {
            suture;
        }
    }
}

