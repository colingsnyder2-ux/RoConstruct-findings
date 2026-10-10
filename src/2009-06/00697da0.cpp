// from server: 17% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct InnerThing {
    char pad0[0x18];
    int m_18;
    int m_1c;
    void method_697730(void* arg);
};

struct ArgThing {
    char pad0[4];
    long refcount;
    long weakrefcount;
};

extern "C" void __stdcall func_006973f0(void*, void*, void*, void*);
extern "C" void __stdcall func_00697b80(void*, void*);
extern "C" void __stdcall func_00675780(void*);

struct S_func_00697da0 {
    char pad0[0x8c];
    InnerThing m_8c;
    char pad_98[0xb0 - 0x98];
    void* m_b0;
    void method_697880();
    void f(int a, ArgThing* b, double c, int d);
};

void S_func_00697da0::f(int a, ArgThing* b, double c, int d)
{
    if (m_b0 != 0) {
        func_006973f0(&m_8c, b, &c, (void*)0x697250);
        func_00697b80(&m_8c, b);
        func_00675780(m_b0);
    }

    ArgThing* p = b;
    if (p != 0) {
        _InterlockedExchangeAdd(&p->refcount, 1);
    }

    m_8c.method_697730(&p);

    if (p != 0) {
        if (_InterlockedExchangeAdd(&p->refcount, -1) == 1) {
            void** vt = *(void***)p;
            void (*dtor)(void*) = (void (*)(void*))vt[1];
            dtor(p);
        }
        if (_InterlockedExchangeAdd(&p->weakrefcount, -1) == 1) {
            void** vt = *(void***)p;
            void (*dtor)(void*) = (void (*)(void*))vt[2];
            dtor(p);
        }
    }

    method_697880();

    if (b != 0) {
        if (_InterlockedExchangeAdd(&b->refcount, -1) == 1) {
            void** vt = *(void***)b;
            void (*dtor)(void*) = (void (*)(void*))vt[1];
            dtor(b);
        }
        if (_InterlockedExchangeAdd(&b->weakrefcount, -1) == 1) {
            void** vt = *(void***)b;
            void (*dtor)(void*) = (void (*)(void*))vt[2];
            dtor(b);
        }
    }
}
