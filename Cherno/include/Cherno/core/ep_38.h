#include <iostream>
#include "Log.h"

using String = std::string;

class Entity
{
private:
    String Name = "Need Initialize";

public:
    Entity() : Name("NoName") {}
    Entity(const String &name) : Name(name) {}

    const String &GetName() const { return Name; }
};

int main()
{
    int a = 2;
    int *b = new int[50]; // 200 bytes
	int *c = new int(5);  // 4 bytes

    Entity* e = new Entity();
    Entity* e1 = (Entity*)malloc(sizeof(Entity)); // malloc is function that allocate memory by size
    
    LOG(e->GetName());
	//LOG(e1->GetName()); e1 is not initialized, may cause crash , because malloc just allocate memory but not call constructor

    delete c;
    delete[] b;
}