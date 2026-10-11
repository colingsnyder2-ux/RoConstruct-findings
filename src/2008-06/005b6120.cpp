// from server: 75% by colin
// roc 2008-06 005b6120  unit: RBX::VHat::?$FactoryProduct  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6120

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Name;

struct CreatorMap {
    void* head;
};

struct FactoryProduct {
    void* getClassName();
    void* getCreator();
};

struct S {
    void* field0;
    void* field4;
};

extern "C" void* __cdecl sub_5b5c20(void* out);
extern "C" void* __cdecl sub_5b3990(void* p);

void* __stdcall sub_5b6120(void* out);

void* __stdcall sub_5b6120(void* out)
{
    void* tmp;
    sub_5b5c20(&tmp);
    void* p = sub_5b3990((char*)tmp + 0x30);
    S* s = (S*)p;
    void (__stdcall *fn)() = *(void (__stdcall **)())0x802890;
    void* e = s->field0;
    if (e == 0) {
        fn();
        e = s->field0;
        if (e == 0) {
            e = 0;
        } else {
            e = *(void**)e;
        }
    } else {
        e = *(void**)e;
    }
    if (s->field4 == *(void**)((char*)e + 0x18)) {
        fn();
    }
    void* v = *(void**)((char*)s->field4 + 0x10);
    *(void**)out = v;
    return out;
}
