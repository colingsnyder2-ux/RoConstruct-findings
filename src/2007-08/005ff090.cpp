// from server: 64% by colin
struct VerbContainer;

struct Verb {
    void* vtable;
    VerbContainer* container;
    Verb(VerbContainer* c, const char* name);
};

struct RedoVerb : Verb {
    RedoVerb(VerbContainer* container);
    void doIt(void* dataState);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

struct VerbContainer {
    char pad[0x160];
    int field_0x160;
    int field_0x164;
    int field_0x168;
    int field_0x16c;
    int field_0x170;
};

void RedoVerb::doIt(void* dataState)
{
    VerbContainer* c = this->container;
    c->field_0x164++;
    int* begin = (int*)c->field_0x16c;
    int* end = (int*)c->field_0x170;
    int idx = c->field_0x160;
    if (begin != 0) {
        int count = (int)(((char*)end - (char*)begin) / 36);
        if ((unsigned)idx >= (unsigned)count) {
            _invalid_parameter_noinfo();
        }
    } else {
        _invalid_parameter_noinfo();
    }
    int* arr = (int*)c->field_0x16c;
    int* elem = (int*)((char*)arr + idx * 36);
    void* p = (void*)(elem[8] + 8);
    void* q = this->container;
    void* r = (void*)((char*)p);
    // call 0x56a8f0
    extern void __stdcall sub_56a8f0(void*, void*);
    sub_56a8f0(r, q);
}
