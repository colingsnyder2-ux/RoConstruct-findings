// from server: 84% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    volatile long refCount1;
    volatile long refCount2;
};

struct TextDisplay {
    char pad[0xec];
    void* field_ec;
    RefCounted* field_f0;
    void cleanup();
};

void TextDisplay::cleanup()
{
    void* e = field_ec;
    if (e) {
        void** vt = *(void***)e;
        void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vt[0x44/4];
        fn(e);
        field_ec = 0;
    }

    RefCounted* p = field_f0;
    field_f0 = 0;
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount1, -1) == 1) {
            void** vt = *(void***)p;
            void (__thiscall *fn)(RefCounted*) = (void (__thiscall *)(RefCounted*))vt[1];
            fn(p);
            if (_InterlockedExchangeAdd(&p->refCount2, -1) == 1) {
                void** vt2 = *(void***)p;
                void (__thiscall *fn2)(RefCounted*) = (void (__thiscall *)(RefCounted*))vt2[2];
                fn2(p);
            }
        }
    }
}
