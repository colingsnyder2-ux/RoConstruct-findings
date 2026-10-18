// from server: 70% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    volatile long refCount;
    volatile long weakCount;
};

struct Script;

extern void* __cdecl func_0042de90(void*);

struct Script {
    void method_005ad030(Script* other);
    void method_00586b10(void** out);
    void target(void* a, void* b);
};

void Script::target(void* a, void* b)
{
    if (a) {
        void* r = func_0042de90(a);
        if (r) {
            ((Script*)r)->method_005ad030(this);
        }
    }
    if (b) {
        void* out;
        method_00586b10(&out);
        RefCounted* p = (RefCounted*)out;
        if (p) {
            if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
                p->unknown1();
                if (_InterlockedExchangeAdd(&p->weakCount, -1) == 1) {
                    p->unknown2();
                }
            }
        }
    }
}
