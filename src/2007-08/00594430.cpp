// from server: 29% by tester
struct VerbContainer;

struct Verb {
    void* vtable;
    VerbContainer* container;
    void* name;
    bool verbSecurity;
};

struct TToolVerb : Verb {
    bool toggle;
};

struct DataModel {
    char pad[0x188];
    VerbContainer* verbContainer;
};

void* operator_new(unsigned int size);
void Verb_ctor(Verb* self, VerbContainer* container, const char* name, bool blacklisted);

struct TToolVerbHolder {
    TToolVerb* __cdecl construct(DataModel* dataModel, bool toggle, bool blacklisted);
};

TToolVerb* TToolVerbHolder::construct(DataModel* dataModel, bool toggle, bool blacklisted)
{
    TToolVerb* result = 0;
    TToolVerb* mem = (TToolVerb*)operator_new(0x4c);
    if (mem != 0) {
        Verb_ctor(mem, dataModel->verbContainer, "GlueTool", blacklisted);
        mem->vtable = (void*)0x7b05c4;
        *(void**)((char*)mem + 4) = (void*)0x7b05a8;
        result = mem;
    }
    return result;
}
