// from server: 35% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBX_RefCounted {
    void* m_vptr;
    volatile long m_refCount;
    volatile long m_weakRefCount;
};

struct RBX_SharedPtr {
    void* m_ptr;
    RBX_RefCounted* m_control;
};

struct RBX_Creator {
    RBX_SharedPtr* getSharedPtr(RBX_SharedPtr* result);
};

struct S_func_00408330 {
    RBX_SharedPtr* f(RBX_SharedPtr* result);
};

RBX_SharedPtr* S_func_00408330::f(RBX_SharedPtr* result)
{
    RBX_SharedPtr tmp;
    tmp.m_ptr = 0;
    tmp.m_control = 0;

    RBX_Creator* creator = (RBX_Creator*)this;
    creator->getSharedPtr(&tmp);

    result->m_ptr = tmp.m_ptr;
    result->m_control = tmp.m_control;
    if (result->m_control != 0) {
        _InterlockedExchangeAdd(&result->m_control->m_refCount, 1);
    }

    if (tmp.m_control != 0) {
        if (_InterlockedExchangeAdd(&tmp.m_control->m_refCount, -1) == 1) {
            void** vtbl = *(void***)tmp.m_control;
            typedef void (__thiscall *Fn)(void*);
            ((Fn)vtbl[1])(tmp.m_control);
            if (_InterlockedExchangeAdd(&tmp.m_control->m_weakRefCount, -1) == 1) {
                void** vtbl2 = *(void***)tmp.m_control;
                ((Fn)vtbl2[2])(tmp.m_control);
            }
        }
    }

    return result;
}
