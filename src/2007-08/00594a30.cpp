// from server: 31% by colin
struct VerbContainer;

struct Verb {
    void* vtable;
    const void* name;
    VerbContainer* container;
    bool verbSecurity;
    Verb(VerbContainer* container, const char* name, bool blacklisted);
};

struct TToolVerb : Verb {
    bool toggle;
    TToolVerb(VerbContainer* container, bool toggle, bool blacklisted);
};

extern "C" void* __cdecl operator_new(unsigned int size);

struct DataModel {
    char pad[0x188];
    VerbContainer* getVerbContainer();
};

struct MouseCommandClass {
    static const char* name();
};

TToolVerb::TToolVerb(VerbContainer* container, bool toggle, bool blacklisted)
    : Verb(container, MouseCommandClass::name(), blacklisted)
{
    this->toggle = toggle;
}

void* __cdecl operator_new(unsigned int size)
{
    return 0;
}

Verb::Verb(VerbContainer* container, const char* name, bool blacklisted)
{
    this->vtable = 0;
    this->name = name;
    this->container = container;
    this->verbSecurity = blacklisted;
}

const char* MouseCommandClass::name()
{
    return "MotorCursor";
}

VerbContainer* DataModel::getVerbContainer()
{
    return 0;
}
