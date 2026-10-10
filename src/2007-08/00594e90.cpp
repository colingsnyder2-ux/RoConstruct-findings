// from server: 22% by colin
struct VerbContainer;

struct Verb {
    void* vtable;
    VerbContainer* container;
    void* name;
    bool verbSecurity;
    Verb(VerbContainer* c, const char* n, bool b);
};

struct TToolVerb : Verb {
    bool toggle;
    TToolVerb(VerbContainer* c, bool t, bool b);
};

extern "C" void* __cdecl operator_new(unsigned int size);

struct DataModel {
    char pad[0x188];
    VerbContainer* container;
};

TToolVerb::TToolVerb(VerbContainer* c, bool t, bool b)
    : Verb(c, 0, b)
{
    this->toggle = t;
}
