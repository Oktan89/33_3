#include <iostream>
#include "registr.h"



int main()
{
    Registr<std::string, int> reg;
    
    reg.add("stering", 12);
    reg.add("stering2", 112);
    reg["stering"] = 555;
    

    reg.print();
    return 0;
}