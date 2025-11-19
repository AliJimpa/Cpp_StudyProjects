#include <iostream>
#include "Log.h"

enum example : unsigned int
{
    A = 5,
    B,
    C
};

class TEST
{
public:
    enum Level
    {
        Error = 0,
        Warning,
        Info
    };

private:
    Level mylevel = Info;

public:
    void SetLevel(Level val)
    {
        mylevel = val;
    }

    void Print()
    {
        std::cout << mylevel << std::endl;
    }
};

int main()
{
    example TestEnum = C;
    LOG(TestEnum);
    TEST theTest;
    theTest.SetLevel(TEST::Level::Error);
    theTest.Print();
}