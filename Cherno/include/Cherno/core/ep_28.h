#include <iostream>
#include "Log.h"

class INameInterface
{
public:
    virtual std::string GetName() = 0;
};

class Entity : public INameInterface
{
public:
    std::string GetName() override
    {
        return "EntityClass";
    }
};

class Player : public Entity
{
private:
    std::string m_Name;

public:
    Player(const std::string &name) : m_Name(name) {}
    std::string GetName() override { return m_Name; }
};

void PrintClassName(INameInterface *interface)
{
    std::cout << interface->GetName() << std::endl;
}

int main()
{
    Entity *e = new Entity();
    Player *p = new Player("Ali");
    PrintClassName(e);
    PrintClassName(p);
    Entity *Ne = p;
    PrintClassName(Ne);
}