#include <iostream>
#include "Log.h"

extern int s_Variable; // can't find static variable in Static.cpp
int insidevariable = 12;

void TestFunction()
{
}

extern void NonStaticFunction();

int main()
{
    LOG(insidevariable);
}