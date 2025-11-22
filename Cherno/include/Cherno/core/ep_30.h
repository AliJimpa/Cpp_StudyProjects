#include <iostream>
#include "Log.h"
#include <string>

int main()
{
    const char *name = "Cherno"; // this is pointer so is 4 byte intiger
    int sizeName = sizeof(name);
    char name2[7] = {'C', 'h', 'e', 'r', 'n', 'o', '\0'}; // take all character with /0 to find the string reached to end
    int sizeName2 = sizeof(name2);
    LOG(sizeName << " - " << name);
    LOG(sizeName2 << " - " << name2);
    // name[2] = 'T';
    // Log(name);
    std::string name3 = "NewCherno";
    int sizeName3 = sizeof(name3);
    LOG(sizeName3 << " - " << name3);
    name3 += "Hello";
    LOG(name3);
    bool contains = name3.find("no") != std::string::npos;
    LOG(contains);
 }