// from server: 44% by colin
struct VerbContainer;

struct Verb {
    void* vtable;
    VerbContainer* container;
    Verb(VerbContainer* c);
};

struct TToolVerb : Verb {
    TToolVerb(VerbContainer* c);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __stdcall sub_5FB470(void* self, void* arg);

TToolVerb::TToolVerb(VerbContainer* c)
    : Verb(c)
{
    void* p = operator_new(0x4c);
    if (p) {
        sub_5FB470(p, *(void**)((char*)this->container + 0x188));
        *(void**)p = (void*)0x7b08f4;
        *(void**)((char*)p + 4) = (void*)0x7b08d8;
    }
}
