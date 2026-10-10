// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long m_refCount;
    volatile long m_weakRefCount;
};

struct LocalBackpack {
    char pad0[0x128];
    char m_a[4];
    char m_b[4];
    char pad1[0x20];
    void* m_ptr150;
    void* m_ptr154;

    void construct(void* arg);
};

extern "C" void* __cdecl sub_49d670(void* out, void* in);
extern "C" void __cdecl sub_402a60(void* dst, void* src);
extern "C" void __cdecl sub_423240(void* self, void* arg);

void LocalBackpack::construct(void* arg)
{
    void* local8;
    void* localc;

    sub_49d670(&local8, arg);
    void* v = *(void**)local8;
    void* p = (char*)local8 + 4;
    m_ptr150 = v;
    sub_402a60(&m_ptr154, p);

    RefCounted* rc = (RefCounted*)localc;
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->m_refCount, -1) == 1) {
            void** vt = rc->vptr;
            void (*fn)(RefCounted*) = (void (*)(RefCounted*))vt[1];
            fn(rc);
            if (_InterlockedExchangeAdd(&rc->m_weakRefCount, -1) == 1) {
                void** vt2 = rc->vptr;
                void (*fn2)(RefCounted*) = (void (*)(RefCounted*))vt2[2];
                fn2(rc);
            }
        }
    }

    void* p128;
    if (this != 0)
        p128 = (char*)this + 0x128;
    else
        p128 = 0;

    void* p150 = m_ptr150;
    if (p150 != 0) {
        sub_423240((char*)p150 + 0x44, p128);
    }

    void* p12c;
    if (this != 0)
        p12c = (char*)this + 0x12c;
    else
        p12c = 0;

    void* p150b = m_ptr150;
    if (p150b != 0) {
        sub_423240((char*)p150b + 0x5c, p12c);
    }
}
