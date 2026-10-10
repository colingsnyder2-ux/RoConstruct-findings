// from server: 19% by tester
struct VerbContainer;

struct Verb {
    void* vtable;
    VerbContainer* container;
    bool verbSecurity;
};

struct TToolVerb : Verb {
    TToolVerb(VerbContainer* c, int name);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __fastcall Verb_ctor(Verb* self, int, int name);

TToolVerb::TToolVerb(VerbContainer* c, int name)
{
    Verb_ctor(this, 0, name);
}

void* __cdecl operator_new(unsigned int size)
{
    return 0;
}
