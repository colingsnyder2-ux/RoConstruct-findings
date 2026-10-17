// from server: 43% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct type_info;

struct bad_cast {
    bad_cast(const char*);
};

struct RefCounted {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    long refCount;
};

struct RefPtr {
    void* ptr;
    RefCounted* ref;
};

struct Descriptor {
    virtual void slot0();
    virtual void* slot1();
    virtual void* slot2();
};

struct BoundFuncDesc {
    char pad[0x38];
    void (__thiscall *fn)(void*);
    int offset3c;
    int offset40;
    void* offset44;
    Descriptor* offset48;

    void invoke(void* args);
};

extern void* __cdecl operator_new(unsigned int, int, const char*, int, int);
extern void __cdecl throw_bad_cast(const char*);
extern RefPtr* __cdecl make_refptr(RefPtr*, RefCounted*);

void BoundFuncDesc::invoke(void* args) {
    void* local8 = offset44;
    void* localc;
    if (offset48) {
        localc = offset48->slot2();
    } else {
        localc = 0;
    }
    void* a = args;
    void* v = *(void**)a;
    void (__thiscall *m)(void*, void*, int) = *(void (__thiscall**)(void*, void*, int))((char*)v + 4);
    m(a, &local8, 1);
    void* p = *(void**)((char*)&local8 + 4);
    void* obj = operator_new(0, 0x9481b8, (const char*)0x9291fc, 0, (int)p);
    if (!obj) {
        throw_bad_cast("bad cast");
    }
    RefPtr tmp;
    RefPtr* r = make_refptr(&tmp, (RefCounted*)obj);
    RefCounted* ref = *(RefCounted**)((char*)r + 4);
    if (ref) {
        _InterlockedExchangeAdd(&ref->refCount, 1);
    }
    int idx = *(int*)((char*)obj + 0x134);
    int off = offset40;
    int base = *(int*)((char*)idx + off);
    base += offset3c;
    void (__thiscall *f)(void*) = fn;
    f((char*)obj + base + 0x134);
    if (localc) {
        void* vt = *(void**)localc;
        void (__thiscall *d)(void*, int) = *(void (__thiscall**)(void*, int))vt;
        d(localc, 1);
    }
}
