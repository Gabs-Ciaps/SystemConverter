#include <iostream>
#include <cmath>
#include "SysConverter.h"
using namespace std;

int letterToNumber(char l)
{
    int w = 0;
    if(l>='A' && l<='F') //it is posible to change value from 'F' to higher to include more systems
    {
        w=l-'A'+10;
    } 
    else if(l>='0' && l<='9')
    {
        w=l-'0';
    }
    else
    {
        throw std::invalid_argument("One bit of value can only be number between 0 and 9 or letter between A and F");
    }
    return w;
}


long long toDecimal(std::string& value, int baseSrc)
{
    long long d=0;
    char c;
    for(int i=value.length(); i>=0;i--)
    {
        d+=(letterToNumber(value[i]))*(std::pow(baseSrc,i));
    }
    return d;
}



string fromDecimal(long long value, int baseTo) 
{
    string result = "";
    if (value == 0)
        return "0";
    else if (value < 0)
        return "error";
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

std::string convert(std::string& value, int baseSrc, int baseTo){
    if(baseSrc<2 || baseSrc>16 || baseTo<2 || baseTo>16)
    {
        throw std::invalid_argument("base must be between 2 and 16");
    }
    long long decimalValue = toDecimal(value, baseSrc);
    return fromDecimal(decimalValue, baseTo);
}