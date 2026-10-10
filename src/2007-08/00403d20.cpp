// from server: 30% by colin
struct ATL_CCF_Inner {
    void* vtable;
    int field4;
    void* field8;
    void method_467ed0();
    void method_466bc0();
};

struct ATL_CComClassFactory {
    void* vtable;
    int refcount;
    ATL_CCF_Inner inner;
    void Release();
};

extern void* g_8bae44;
extern void* g_8b5188;

void ATL_CComClassFactory::Release()
{
    vtable = (void*)0x784ea4;
    refcount = (int)0xc0000001;
    inner.method_467ed0();
    void** p = (void**)g_8bae44;
    void (*fn)(void*) = (void (*)(void*))p[2];
    fn(g_8bae44);
    inner.method_466bc0();
}
