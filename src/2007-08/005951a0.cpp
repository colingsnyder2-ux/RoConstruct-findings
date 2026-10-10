// from server: 43% by colin
struct VerbContainer;
struct DataModel;

struct Verb {
    Verb(VerbContainer* container, const char* name, bool blacklisted);
    virtual ~Verb();
};

struct MouseCommand {
    static const char* name();
};

struct TToolVerb : Verb {
    TToolVerb(DataModel* dataModel, bool toggle, bool blacklisted);
};

struct DropperTool {
    static const char* name();
};

struct DataModel {
    char pad[0x188];
    int field188;
};

extern "C" void* __cdecl operator_new(unsigned int size);

TToolVerb::TToolVerb(DataModel* dataModel, bool toggle, bool blacklisted)
    : Verb(0, 0, false)
{
    void* mem = operator_new(0x28);
    if (mem) {
        int v = dataModel->field188;
        Verb* p = (Verb*)mem;
        p->Verb::Verb(0, 0, false);
        *(void**)mem = (void*)0x7b0c54;
        *(void**)((char*)mem + 4) = (void*)0x7b0c3c;
    }
}
