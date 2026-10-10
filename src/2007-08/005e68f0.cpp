// from server: 51% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXName {
    char pad[4];
};

struct CreatorBase {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct FactoryProduct {
    void* m_vptr;
    void* m_shared;
    void* m_creator;
    FactoryProduct(const RBXName& name, void* a, void* b, void* c, void* d, void* e, void* f);
};

extern "C" int __cdecl sub_4879D0(void*);
extern "C" void* __cdecl sub_62FEF6(unsigned int);

FactoryProduct::FactoryProduct(const RBXName& name, void* a, void* b, void* c, void* d, void* e, void* f)
{
    void* local = 0;
    if (sub_4879D0(&local)) {
        m_creator = 0;
        m_vptr = (void*)0x5e68b0;
        m_shared = (void*)0x5e67e0;
        void* p = sub_62FEF6(0x18);
        if (p) {
            *(void**)p = a;
            *(void**)((char*)p + 4) = b;
            *(void**)((char*)p + 8) = c;
            *(void**)((char*)p + 12) = d;
            *(void**)((char*)p + 16) = e;
            *(void**)((char*)p + 20) = f;
            if (f) {
                _InterlockedExchangeAdd((volatile long*)((char*)f + 4), 1);
            }
        }
        m_creator = p;
    }
    if (f) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)f + 4), -1) == 1) {
            CreatorBase* cb = (CreatorBase*)f;
            cb->v1();
            if (_InterlockedExchangeAdd((volatile long*)((char*)f + 8), -1) == 1) {
                cb->v2();
            }
        }
    }
}
