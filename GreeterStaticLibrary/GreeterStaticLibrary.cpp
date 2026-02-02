#include <iostream>

#include "GreeterStaticLibrary.h"

std::string Greeter::Greeter::greet(const std::string& name)
{
    return "Здравствуйте, " + name + "!";
}