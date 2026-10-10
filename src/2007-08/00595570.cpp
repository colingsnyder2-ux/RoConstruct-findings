// from server: 40% by colin
struct VerbContainer;

struct Verb {
    void* vtable;
    VerbContainer* container;
    Verb(VerbContainer* c);
};

struct TToolVerb : Verb {
    int field20;
    int field24;
    TToolVerb(VerbContainer* c);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __stdcall sub_5E3D10(void* self, int arg);

TToolVerb::TToolVerb(VerbContainer* c) : Verb(c)
{
    this->field20 = 0;
    this->field24 = 0;
}

Verb::Verb(VerbContainer* c)
{
    this->container = c;
}

void* TToolVerb_ctor(Verb* self, VerbContainer* c)
{
    TToolVerb* p = (TToolVerb*)operator_new(0x28);
    if (p) {
        sub_5E3D10(p, *(int*)((char*)c + 0x188));
        p->vtable = (void*)0x7b0d4c;
        *(void**)((char*)p + 4) = (void*)0x7b0d30;
        p->field20 = 0;
        p->field24 = 0;
    }
    return p;
}
