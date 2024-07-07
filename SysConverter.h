#ifndef SYSCONVERTER_H
#define SYSCONVERTER_H
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class SysConverter{
private:
    string result = "";
    int toDecimal(std::string& value, int baseSrc)
    {
    long long d=0;
    char c;
    for(int i=value.length()-1; i>=0;i--)
    {
        if(letterToNumber(value[value.length()-i-1])>=baseSrc)
            throw std::invalid_argument("number does not match its base");
        d+=(letterToNumber(value[value.length()-i-1]))*static_cast<long long>(std::pow(baseSrc, i));
    }
    return d;
    }
    std::string fromDecimal(long long value, int baseTo)
    {
        string next;
    if (value == 0)
        return "0";
    else if (value < 0)
        return "error";
    else {
        result = fromDecimal(value / baseTo, baseTo);
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
            result += to_string(value % baseTo);
    }
    return result;
}
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
        throw std::invalid_argument("One bit of value can only be number between 0 and 9 or letter between A and F ");
    }
    return w;
    }
public:
    std::string convert(std::string& value, int baseSrc, int baseTo){
    if(baseSrc<2 || baseSrc>16 || baseTo<2 || baseTo>16)
    {
        throw std::invalid_argument("base must be between 2 and 16");
    }
    long long decimalValue = toDecimal(value, baseSrc);
    return fromDecimal(decimalValue, baseTo).erase(0,1);
}
};
#endif