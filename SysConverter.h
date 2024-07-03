#ifndef SYSCONVERTER_H
#define SYSCONVERTER_H
#include "SysConverter.cpp"
#include <iostream>

class SysConverter{
private:
    std::string SysConverter::toDecimal(std::string& value, int baseSrc);
    std::string Sysconverter::fromDecimal(std::string& value, int baseTo)
public:
    std::string convert(double value, int baseSrc, int baseTo);
};
#endif