#include <iostream>
#include "converter.h"

std::string SysConverter::convert(std::string& value, int baseSrc, int baseTo){
    if(baseSrc<2 || baseSrc>36 || baseTo<2 || baseTo>36)
    {
        throw std::invalid_argument("base must be betwin 2 and 36")
    }
    std::string decimalValue = SysConverter::toDecimal(value, baseSrc);
    return SysConverter::fromDecimal(decimalValue, baseTo)
}
std::string SysConverter::toDecimal(std::string& value, int baseSrc)
{
    double d;
    std::string s;
    char c;
    int n = 0
    for(int i=value.length(); i>=n;i--)
    {
        if(value[i]==',' || value[i]=='.')
        {
            n=value.length()-i; //not working properly
        }
        d+=value[i]*base**i
    }
    return s
}
std::string Sysconverter::fromDecimal(std::string& value, int baseTo)
{

}