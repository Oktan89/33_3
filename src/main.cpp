#include <iostream>
#include "registr.h"



int main()
{
    //Registr<double, double> reg(21.0, 22.0); 
 
    // <double, double> нужно правильное сравнение
    //reg[21.0] = 66.0;
    Registr<std::string, int> reg("test", 19);

    reg.print();
    return 0;
}