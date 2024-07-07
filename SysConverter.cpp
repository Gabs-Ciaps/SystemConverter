#include <iostream>
#include "converter.h"
using namespace std;
//baseTo - base to be switched to
//baseSrc - source base
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
public string fromDecimal(long long value, int baseTo) {
    string result = "";
    if (value == 0)
        return "0";
    else if (value < 0)
        return "error"
    else {
        fromDecimal(value / baseTo, baseTo);
        if(value % baseTo > 9) {
            switch (value % baseTo)
            {
            case 10:
                result  += "A";
                break;
            case 11:
                result  += "B";
                break;
            case 12:
                result  += "C";
                break;
            case 13:
                result  += "D";
                break;
            case 14:
                result  += "E";
                break;
            case 15:
                result  += "F";
                break;
            }    
        }
        else
            result += value % baseTo;
    }
    return result;
}