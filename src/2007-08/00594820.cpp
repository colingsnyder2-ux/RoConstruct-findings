// from server: 29% by colin
struct VerbContainer;

struct Verb {
    void* vtable;
    VerbContainer* container;
    void* name;
    Verb(VerbContainer* c, const char* n);
};

struct TToolVerb : Verb {
    TToolVerb(VerbContainer* container, const char* name);
};

extern "C" void* __cdecl operator_new(unsigned int size);

TToolVerb::TToolVerb(VerbContainer* container, const char* name)
    : Verb(container, name)
{
}
