
#include <iostream>

extern "C"{
#include "IP2Location.h"
}
int main()
{
    IP2Location* ipObj = IP2Location_openWithBuiltinDB();
    char ip[] = "211.162.34.206";
    IP2LocationRecord* record = IP2Location_get_country_short(ipObj, ip);
    std::string c_short = record->country_short;
    std::cout<<ip<<"\t=>\t"<<c_short<<std::endl;
    return 0;
}
