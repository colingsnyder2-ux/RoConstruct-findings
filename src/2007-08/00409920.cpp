// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* m_vptr;
    volatile long m_ref1;
    volatile long m_ref2;
    virtual void Release1();
    virtual void Release2();
};

struct CritSect {
    void Lock();
    void Unlock();
};

struct Holder {
    void* m_ptr;
};

extern CritSect g_crit;
extern int g_flag;
extern Holder g_holder;

extern "C" void __cdecl sub_4095D0(void*);
extern "C" void __cdecl sub_54A950(void*, void*);
extern "C" void __cdecl sub_541630(void*, void*);

void sub_409920()
{
    g_crit.Lock();
    if (g_flag == 0) {
        void* local8 = 0;
        void* local1c = 0;
        sub_4095D0(&local8);
        sub_54A950(&local1c, &local8);
        void* p = *(void**)local1c;
        sub_541630(local8, p);
        RefCounted* r = (RefCounted*)local1c;
        if (r) {
            if (_InterlockedExchangeAdd(&r->m_ref1, -1) == 1) {
                r->Release1();
                if (_InterlockedExchangeAdd(&r->m_ref2, -1) == 1) {
                    r->Release2();
                }
            }
        }
        RefCounted* r2 = (RefCounted*)local8;
        if (r2) {
            if (_InterlockedExchangeAdd(&r2->m_ref1, -1) == 1) {
                r2->Release1();
                if (_InterlockedExchangeAdd(&r2->m_ref2, -1) == 1) {
                    r2->Release2();
                }
            }
        }
    }
    g_crit.Unlock();
}
