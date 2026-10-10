// from server: 37% by colin
struct VerbContainer;

struct Verb {
    void* vtable;
    VerbContainer* container;
    void* name;
    bool verbSecurity;
    Verb(VerbContainer* c, const char* n, bool blacklisted);
    virtual ~Verb();
};

struct TToolVerb : Verb {
    TToolVerb(VerbContainer* c, bool toggle, bool blacklisted);
};

extern "C" void* __cdecl operator_new(unsigned int size);

TToolVerb::TToolVerb(VerbContainer* c, bool toggle, bool blacklisted)
    : Verb(c, "DirectionCursor", blacklisted)
{
    this->vtable = (void*)0x7b09e4;
    *(void**)((char*)this + 4) = (void*)0x7b09cc;
}
