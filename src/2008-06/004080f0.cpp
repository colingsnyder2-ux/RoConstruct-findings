// from server: 70% by colin
struct VCApp_CComAggObject
{
    long __stdcall QueryInterface(void* riid, void** ppvObject);
};

long __stdcall VCApp_CComAggObject::QueryInterface(void* riid, void** ppvObject)
{
    if (riid != 0)
    {
        return (long)0x8002000b;
    }
    if (ppvObject == 0)
    {
        return (long)0x80004003;
    }
    if (*(int*)0x928be4 == 0)
    {
        extern void __stdcall sub_404A80(void*);
        sub_404A80(*(void**)((char*)&ppvObject + 4));
    }
    *ppvObject = *(void**)0x928be4;
    if (*(int*)0x928be4 != 0)
    {
        void* p = *(void**)0x928be4;
        void** vtbl = *(void***)p;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[1];
        fn(p);
    }
    return 0;
}
