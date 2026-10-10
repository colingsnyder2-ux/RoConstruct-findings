// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long m_ref1;
    volatile long m_ref2;
};

struct Inner {
    char pad0[0x14];
    void* m_a;
    char pad1[0x14];
    void* m_b;
};

struct LocalBackpack {
    char pad0[0x120];
    void* m_field120;
    void* m_field124;
    char pad1[0x20];
    void* m_field148;
    void* m_field14c;
    void construct(void* arg);
};

extern "C" void __cdecl sub_5e49e0(void* out, void* in);
extern "C" void __cdecl sub_402a60(void* dst, void* src);
extern "C" void __cdecl sub_423240(void* dst, void* src);

void LocalBackpack::construct(void* arg)
{
    void* local8;
    void* localc;
    sub_5e49e0(&local8, arg);
    void* v = *(void**)local8;
    void* p = (char*)local8 + 4;
    m_field148 = v;
    sub_402a60(&m_field14c, p);

    RefCounted* rc = (RefCounted*)localc;
    if (rc) {
        if (_InterlockedExchangeAdd(&rc->m_ref1, -1) == 1) {
            void** vt = (void**)rc->vptr;
            void (*fn)(void*) = (void (*)(void*))vt[1];
            fn(rc);
            if (_InterlockedExchangeAdd(&rc->m_ref2, -1) == 1) {
                void** vt2 = (void**)rc->vptr;
                void (*fn2)(void*) = (void (*)(void*))vt2[2];
                fn2(rc);
            }
        }
    }

    void* p120 = 0;
    if (this) p120 = (char*)this + 0x120;
    void* f148 = m_field148;
    if (f148) {
        sub_423240((char*)f148 + 0x14, p120);
    }

    void* p124 = 0;
    if (this) p124 = (char*)this + 0x124;
    void* f148b = m_field148;
    if (f148b) {
        sub_423240((char*)f148b + 0x2c, p124);
    }
}
