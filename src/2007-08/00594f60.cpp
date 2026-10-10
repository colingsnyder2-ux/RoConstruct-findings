// from server: 33% by colin
struct VerbContainer;

struct Verb {
    void* vtable;
    const void* name;
    VerbContainer* container;
    bool verbSecurity;
    void ctor(VerbContainer* container, const char* name);
};

struct TToolVerb : Verb {
    TToolVerb(VerbContainer* container, const char* name);
};

extern "C" void* __cdecl operator_new(unsigned int size);

void Verb::ctor(VerbContainer* container, const char* name)
{
    this->container = container;
    this->name = name;
}

TToolVerb::TToolVerb(VerbContainer* container, const char* name)
{
    Verb* v = (Verb*)operator_new(0x28);
    if (v) {
        v->ctor(container, name);
        v->vtable = (void*)0x7b0b5c;
        *(void**)((char*)v + 4) = (void*)0x7b0b40;
    }
}
