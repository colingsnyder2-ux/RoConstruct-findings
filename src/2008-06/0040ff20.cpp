// from server: 48% by colin




extern "C" void* __cdecl operator_new(unsigned int size);

struct CComObjectBase {
    void* vtable;
    int refcount;
    void* pUnk;
    void* pUnk2;
    void* pUnk3;
    void* pUnk4;
    void* pUnk5;
};

struct CComEnum {
    void* vtable;
    int refcount;
    void* pUnk;
    void* pUnk2;
    void* pUnk3;
    void* pUnk4;
    void* pUnk5;
};

struct GlobalObj {
    virtual void f1();
    virtual void f2();
};

extern GlobalObj* g_pGlobal;

long __stdcall CreateEnum(void** ppv)
{
    if (ppv == 0)
        return (long)0x80004003;

    *ppv = 0;

    CComEnum* p = (CComEnum*)operator_new(0x1c);
    if (p != 0) {
        p->refcount = 0;
        p->pUnk3 = 0;
        p->pUnk2 = 0;
        p->pUnk = 0;
        p->pUnk4 = 0;
        p->pUnk5 = 0;
        p->vtable = (void*)0x80d7f0;
        g_pGlobal->f2();
        *ppv = p;
        return 0;
    }
    return (long)0x8007000e;
}
