// from server: 21% by colin
struct VerbContainer;
struct DataModel;

struct Verb {
    void* vtable;
    void* name;
    VerbContainer* container;
    bool verbSecurity;
    Verb(VerbContainer* c, const char* n, bool blacklisted);
};

struct TToolVerb : Verb {
    bool toggle;
    TToolVerb(DataModel* dataModel, bool toggle, bool blacklisted);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl Verb_ctor(Verb* self, VerbContainer* container, const char* name, bool blacklisted);

TToolVerb::TToolVerb(DataModel* dataModel, bool toggle_, bool blacklisted)
    : Verb(0, 0, blacklisted)
{
    this->toggle = toggle_;
}
