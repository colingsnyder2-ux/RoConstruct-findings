// from server: 31% by colin
struct VerbContainer;

struct Verb {
    void* vtable;
    VerbContainer* container;
    bool verbSecurity;
    Verb(VerbContainer* c, const char* name, bool blacklisted);
    virtual ~Verb();
};

struct TToolVerb : Verb {
    bool toggle;
    TToolVerb(VerbContainer* c, bool t, bool blacklisted);
};

extern "C" void* __cdecl operator_new(unsigned int size);

struct DataModel {
    char pad[0x188];
    VerbContainer* container;
};

TToolVerb::TToolVerb(VerbContainer* c, bool t, bool blacklisted)
    : Verb(c, "Tool", blacklisted)
{
    toggle = t;
    vtable = (void*)0x7ab5b4;
    *(void**)((char*)this + 4) = (void*)0x7ab59c;
}
