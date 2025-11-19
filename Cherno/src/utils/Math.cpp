#include <iostream>
#include "Log.h"

// void Log(const char* message);
// void Log(const char* message)
// {
//     std::cout << message << std::endl;
// }

void NotImplementLog(const char* message);

int Multiply(int a , int b)
{
    Log("Multiply");
    return a * b;
}

static int STATICMultiply(int a , int b)
{
    NotImplementLog("Multiply");
    return a * b;
}

// int main()
// {
//     std::cout<< Multiply(5,2) << std::endl;
//     std::cin.get();
// }