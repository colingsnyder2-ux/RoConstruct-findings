// from server: 69% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct RefCounted {
    void* value;
    RefCounted& operator=(const RefCounted&);
    ~RefCounted();
};

struct Inner {
    char pad[0x198];
    int field;
};

struct TargetVtbl {
    char pad[8];
    float (__thiscall* getValue)(struct Target*, void*);
};

struct Target {
    TargetVtbl* vtbl;
};

struct Src {
    char pad[0x18];
    Target* target;
};

struct S {
    char pad[0x128];
    Inner* inner;
    Src* src;

    float GetValue(void*);
};

float S::GetValue(void* arg)
{
    RefCounted r;
    r.value = 0;
    r = RefCounted();
    void* p = operator new(0x14);
    void* q = (p != 0) ? (char*)p + 0x14 : 0;
    Target* t = src->target;
    float result = t->vtbl->getValue(t, q);
    return result;
}
