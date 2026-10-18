// from server: 73% by colin
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
    void* field;
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
    void* obj = *(void**)((char*)inner + 0x198);

    RefCounted r;
    r.value = 0;
    r = *(RefCounted*)&obj;

    void* p = r.value;
    void* q = (p != 0) ? (char*)p + 0x14 : 0;

    Target* t = src->target;
    float result = t->vtbl->getValue(t, q);

    r.~RefCounted();

    return result;
}
