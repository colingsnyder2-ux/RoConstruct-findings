// from server: 40% by colin
struct VerbContainer;

struct Verb {
    void* vtable;
    VerbContainer* container;
    void* name;
    bool verbSecurity;
};

struct MouseCommand {
    static const char* name();
};

struct DataModel;

struct TToolVerb : Verb {
    bool toggle;
    TToolVerb(DataModel* dataModel, bool toggle, bool blacklisted);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __stdcall Verb_ctor(Verb* self, VerbContainer* container, const char* name, bool blacklisted);

struct DataModelLayout {
    char pad[0x188];
    VerbContainer* container;
};

TToolVerb::TToolVerb(DataModel* dataModel, bool toggle, bool blacklisted)
{
    Verb* v = (Verb*)operator_new(0x28);
    if (v) {
        VerbContainer* c = ((DataModelLayout*)dataModel)->container;
        Verb_ctor(v, c, MouseCommand::name(), blacklisted);
        v->vtable = (void*)0x7b0a6c;
        *(void**)((char*)v + 4) = (void*)0x7b0a54;
    }
    this->vtable = (void*)v;
}
