#ifndef SYSCONVERTER_H
#define SYSCONVERTER_H
#include "SysConverter.cpp"
#include <iostream>

class SysConverter{
private:
    int toDecimal(std::string& value, int baseSrc);
    std::string fromDecimal(std::string& value, int baseTo);
    int letterToNumber(char l);
public:
    std::string convert(double value, int baseSrc, int baseTo);
};
#endif