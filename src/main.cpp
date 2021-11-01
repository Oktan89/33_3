#include <iostream>
#include "registr.h"



int main()
{
    Registr<std::string, double> reg; // <string, string> Не работает
    
    reg["test"] = 0.2;
    

    reg.print();
    return 0;
}