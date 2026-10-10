// from server: 30% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Str {
    char pad[0x1c];
};

extern "C" void __stdcall Str_ctor(Str*, const char*);
extern "C" void __stdcall Str_dtor(Str*);

extern "C" void* __stdcall sub_4B4E50(void*);
extern "C" void __stdcall sub_55A8F0(void*, void*);

struct RefCounted {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    volatile long ref1;
    volatile long ref2;
};

struct TypedMemItem {
    void construct(const char* name);
};

void TypedMemItem::construct(const char* name) {
    Str s;
    Str_ctor(&s, name);
    void* p = sub_4B4E50(&s);
    sub_55A8F0(p, this);
    Str_dtor(&s);
    RefCounted* r = (RefCounted*)p;
    if (r) {
        if (_InterlockedExchangeAdd(&r->ref1, -1) == 1) {
            r->v1();
            if (_InterlockedExchangeAdd(&r->ref2, -1) == 1) {
                r->v2();
            }
        }
    }
}
