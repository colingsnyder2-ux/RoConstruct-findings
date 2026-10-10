// from server: 66% by colin
struct VCContent_CComAggObject
{
    long __stdcall CreateInstance(void* pUnkOuter, void* pClsId, void** ppv);
};

extern "C" long __stdcall sub_004022A0(void* pClsId, void* pUnkOuter, void* pIID, void** ppv);

long __stdcall VCContent_CComAggObject::CreateInstance(void* pUnkOuter, void* pClsId, void** ppv)
{
    if (ppv == 0)
    {
        return 0x80004003;
    }

    *ppv = 0;

    unsigned int* p = (unsigned int*)pClsId;
    if (p[0] == 0 && p[1] == 0 && p[2] == 0xC0 && p[3] == 0x46000000)
    {
        *ppv = pClsId;
        void** vtbl = *(void***)pClsId;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[1];
        fn(pClsId);
        return 0;
    }

    return sub_004022A0(pClsId, pUnkOuter, (void*)0x786ec4, ppv);
}
