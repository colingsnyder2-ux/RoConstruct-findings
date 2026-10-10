// from server: 31% by colin
struct VerbContainer;

struct Verb {
    void* vtable;
    VerbContainer* container;
    void* name;
    bool verbSecurity;
};

struct BoundVerb {
    void* vtable;
    VerbContainer* container;
    void* name;
    bool verbSecurity;
    void* doItFunction;
    void* isEnabledFunction;
    void* isCheckedFunction;
    void* getTextFunction;
    void* field_0x188;
    void ctor(VerbContainer* container, int name);
};

struct TToolVerb {
    void* vtable;
    VerbContainer* container;
    void* name;
    bool verbSecurity;
    bool toggle;
    void* doItFunction;
    void* isEnabledFunction;
    void* isCheckedFunction;
    void* getTextFunction;
    void* field_0x188;
    void ctor(void* dataModel, bool toggle, bool blacklisted);
};

extern "C" void* __cdecl operator_new(unsigned int size);

void BoundVerb::ctor(VerbContainer* container, int name)
{
    this->container = container;
    this->name = (void*)name;
}

void TToolVerb::ctor(void* dataModel, bool toggle, bool blacklisted)
{
    void* mem = operator_new(0x3c);
    if (mem) {
        ((BoundVerb*)mem)->ctor(this->container, *(int*)((char*)this->container + 0x188));
    }
}
