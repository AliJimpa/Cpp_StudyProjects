#include <iostream>
#include "Log.h"

class Entity
{
public:
    virtual std::string GetName() { return "Entity"; }
    // std::string GetName() { return "Entity"; }
};

class Player : public Entity
{
private:
    std::string m_Name;

public:
    Player(const std::string &name) : m_Name(name) {}
    std::string GetName() override { return m_Name; }
    //std::string GetName() { return m_Name; }
};

int main()
{
    Entity *e = new Entity();
    Player *p = new Player("Ali");
    LOG(e->GetName());
    LOG(p->GetName());
    Entity *Ne = p;
    LOG(Ne->GetName());
}