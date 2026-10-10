// from server: 42% by colin
struct VerbContainer;

struct Verb {
    void* vtable;
    VerbContainer* container;
    void* name;
    bool verbSecurity;
    void ctor(VerbContainer* c, const void* n, bool b);
};

struct TToolVerb : Verb {
    bool toggle;
};

extern "C" void* __cdecl operator_new(unsigned int size);

struct DataModel {
    char pad[0x188];
    VerbContainer* verbContainer;
};

struct TToolVerb_ctor_impl {
    static TToolVerb* construct(DataModel* dataModel, bool toggle, bool blacklisted);
};

TToolVerb* TToolVerb_ctor_impl::construct(DataModel* dataModel, bool toggle, bool blacklisted)
{
    TToolVerb* result = 0;
    TToolVerb* mem = (TToolVerb*)operator_new(0x4c);
    result = mem;
    if (mem != 0) {
        mem->ctor(dataModel->verbContainer, (const void*)0x7b0520, blacklisted);
        mem->vtable = (void*)0x7b053c;
        *(void**)((char*)mem + 4) = (void*)0x7b0520;
        result = mem;
    }
    return result;
}
