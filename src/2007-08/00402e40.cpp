// from server: 66% by colin
struct VCWorkspace_CComAggObject {
    long __stdcall QueryInterface(void* pUnkOuter, void* ppvObject, void* pv);
};

long __stdcall VCWorkspace_CComAggObject::QueryInterface(void* pUnkOuter, void* ppvObject, void* pv)
{
    if (pv == 0)
        return 0x80004003;

    *(void**)pv = 0;

    unsigned int* p = (unsigned int*)ppvObject;
    if (p[0] == 0 && p[1] == 0 && p[2] == 0xc0 && p[3] == 0x46000000)
    {
        *(void**)pv = ppvObject;
        void** vtbl = *(void***)ppvObject;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[1];
        fn(ppvObject);
        return 0;
    }

    extern long __stdcall sub_4022a0(void* p1, void* p2, void* p3, void* p4);
    return sub_4022a0((char*)ppvObject + 8, (void*)0x784b88, ppvObject, pv);
}
