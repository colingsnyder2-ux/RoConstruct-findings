// from server: 73% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __stdcall type_info_equal(const void*, const void*);

struct RefCounted {
    void* m_vptr;
    long m_ref1;
    long m_ref2;
};

struct Holder {
    void* m_vptr;
    char m_pad[8];
    RefCounted* m_ptr;
};

struct Slot {
    void* m_vptr;
    char m_pad[8];
    RefCounted* m_ptr;
};

extern "C" void* g_type_0068cb60;

void assign_0068cb60(Holder* dst, Slot* src, int op)
{
    if (op == 0 || op == 1) {
        if (dst) {
            dst->m_vptr = src->m_vptr;
            *(void**)((char*)dst + 4) = *(void**)((char*)src + 4);
            *(void**)((char*)dst + 8) = *(void**)((char*)src + 8);
            RefCounted* p = src->m_ptr;
            dst->m_ptr = p;
            if (p) {
                _InterlockedExchangeAdd(&p->m_ref1, 1);
            }
        }
        if (op == 1) {
            RefCounted* p = src->m_ptr;
            if (p) {
                if (_InterlockedExchangeAdd(&p->m_ref1, -1) == 1) {
                    ((void (__thiscall*)(RefCounted*))((void**)p->m_vptr)[1])(p);
                    if (_InterlockedExchangeAdd(&p->m_ref2, -1) == 1) {
                        ((void (__thiscall*)(RefCounted*))((void**)p->m_vptr)[2])(p);
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
                ((void (__thiscall*)(RefCounted*))((void**)p->m_vptr)[1])(p);
                if (_InterlockedExchangeAdd(&p->m_ref2, -1) == 1) {
                    ((void (__thiscall*)(RefCounted*))((void**)p->m_vptr)[2])(p);
                }
            }
        }
        return;
    }
    if (op == 3) {
        void* t = dst->m_vptr;
        int eq = type_info_equal(t, &g_type_0068cb60);
        dst->m_vptr = eq ? src->m_vptr : 0;
        return;
    }
    dst->m_vptr = &g_type_0068cb60;
    *(char*)((char*)dst + 4) = 0;
    *(char*)((char*)dst + 5) = 0;
}
