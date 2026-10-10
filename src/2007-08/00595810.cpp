// from server: 29% by colin
struct VerbContainer;

struct Verb {
    void* vtable;
    void* vtable2;
    Verb(VerbContainer* container, const char* name, bool blacklisted);
};

struct TToolVerb : Verb {
    TToolVerb(VerbContainer* container, bool toggle, bool blacklisted);
};

extern "C" void* __cdecl operator_new(unsigned int size);

struct DataModel {
    char pad[0x188];
    VerbContainer* container;
};

TToolVerb::TToolVerb(VerbContainer* container, bool toggle, bool blacklisted)
    : Verb(container, "Tool", blacklisted)
{
}
