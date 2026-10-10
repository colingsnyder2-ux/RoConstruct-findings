// from server: 50% by colin
struct Verb {
    void* vtable;
    void* field4;
    void* field8;
    void* fieldC;
    Verb(void* container, const char* name);
};

struct TToolVerb : Verb {
    TToolVerb(void* dataModel, bool toggle, bool blacklisted);
};

extern "C" void* __cdecl operator_new(unsigned int size);

void* __stdcall sub_5FB470(void* arg);

TToolVerb::TToolVerb(void* dataModel, bool toggle, bool blacklisted)
    : Verb(0, 0)
{
    void* mem = operator_new(0x4c);
    if (mem) {
        void* p = *(void**)((char*)dataModel + 0x188);
        sub_5FB470(p);
        *(void**)mem = (void*)0x7b096c;
        *(void**)((char*)mem + 4) = (void*)0x7b0954;
    }
}
