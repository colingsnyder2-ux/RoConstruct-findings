// from server: 70% by colin
struct VCBrowserViewExternal_CComAggObject {
    long __stdcall QueryInterface(void* pUnk, void** ppv);
};

extern "C" long __stdcall sub_4022A0(void* pUnk, const void* pIID, void** ppv);

long __stdcall VCBrowserViewExternal_CComAggObject::QueryInterface(void* pUnk, void** ppv)
{
    if (ppv == 0)
        return (long)0x80004003;

    *ppv = 0;

    if (*(unsigned int*)((char*)pUnk + 0) == 0 &&
        *(unsigned int*)((char*)pUnk + 4) == 0 &&
        *(unsigned int*)((char*)pUnk + 8) == 0xC0 &&
        *(unsigned int*)((char*)pUnk + 0xC) == 0x46000000)
    {
        *ppv = pUnk;
        void** vtbl = *(void***)pUnk;
        void* fn = vtbl[1];
        ((void (__stdcall*)(void*))fn)(pUnk);
        return 0;
    }

    return sub_4022A0(pUnk, (const void*)0x785bd0, ppv);
}
