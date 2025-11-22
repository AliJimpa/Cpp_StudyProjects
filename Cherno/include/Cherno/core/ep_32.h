#include <iostream>
#include "Log.h"
#include <string>

class Entity
{
private:
    int m_x, m_y;
    int *p_x, *p_y;
    mutable int var = 4;

public:
    int GetX() const
    {
        // m_x = 90; // error C3490: 'm_x' cannot be modified because it is being accessed through a const object
        var = 6; // can change becuse is mutable
        return m_x;
    }
    int GetX()
    {
        return m_x;
    }
    int GetY()
    {
        m_y = 45;
        return m_y;
    }
};

void PrintEntity(const Entity &e)
{
    std::cout << e.GetX() << std::endl;
}

int main()
{
    const int MAX_AGE = 90;

    int *a = new int;
    const int *b = new int; // cant chage value of b && int const * b = new int another approach
    int *const c = new int; // cant change memory addres in point
    // the important point is * -> befor or after
    const int *const d = new int; // cant change pointer & value

    *a = 2;
    // a = &MAX_AGE;
    a = (int *)&MAX_AGE;
    LOG(*a);
}

// const befor anyting == can change variable
// const after * == can change pointer
// const at the end of method can not chnage in all (if you wawnt use mutable)