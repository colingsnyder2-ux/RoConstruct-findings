// from server: 72% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct TypeInfo {
    bool operator==(const TypeInfo&) const;
};

struct RefCounted {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    long m_ref1;
    long m_ref2;
};

struct Slot {
    void* m_a;
    void* m_b;
    void* m_c;
    RefCounted* m_ptr;
};

struct Holder {
    void* m_a;
    void* m_b;
    void* m_c;
    RefCounted* m_ptr;
};

extern TypeInfo* g_type_00a1be68;
extern bool (__stdcall *g_fn_0089e9a4)(TypeInfo*);

void __cdecl func_0068c5a0(Slot* dst, int op, Holder* src)
{
    if (op == 0 || op == 1) {
        if (dst) {
            dst->m_a = src->m_a;
            dst->m_b = src->m_b;
            dst->m_c = src->m_c;
            dst->m_ptr = src->m_ptr;
            if (dst->m_ptr) {
                _InterlockedExchangeAdd(&dst->m_ptr->m_ref1, 1);
            }
        }
        if (op == 1) {
            RefCounted* p = src->m_ptr;
            if (p) {
                if (_InterlockedExchangeAdd(&p->m_ref1, -1) == 1) {
                    p->f1();
                    if (_InterlockedExchangeAdd(&p->m_ref2, -1) == 1) {
                        p->f2();
                    }
                }
            }
        }
        return;
    }
    if (op == 2) {
        RefCounted* p = src->m_ptr;
        if (p) {
            if (_InterlockedExchangeAdd(&p->m_ref1, -1) == 1) {
                p->f1();
                if (_InterlockedExchangeAdd(&p->m_ref2, -1) == 1) {
                    p->f2();
                }
            }
        }
        return;
    }
    if (op == 3) {
        TypeInfo* t = *(TypeInfo**)dst;
        bool r = g_fn_0089e9a4(g_type_00a1be68);
        *(int*)dst = r ? 0 : (int)src;
        return;
    }
    *(TypeInfo**)dst = g_type_00a1be68;
    ((char*)dst)[4] = 0;
    ((char*)dst)[5] = 0;
}
