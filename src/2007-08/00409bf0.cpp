// from server: 79% by colin
struct VCApp_CComObject
{
    long __stdcall QueryInterface(void* pUnkOuter, void** ppv);
};

long __stdcall VCApp_CComObject::QueryInterface(void* pUnkOuter, void** ppv)
{
    char* p = (char*)pUnkOuter;
    char* obj;
    if (p != 0)
        obj = p - 0x1c;
    else
        obj = 0;

    if (ppv == 0)
        return (long)0x80004003;

    void* inner = *(void**)(obj + 0x20);
    if (inner != 0)
    {
        void** vtbl = *(void***)inner;
        void* saved = ppv;
        void* saved2 = inner;
        void* fn = vtbl[0];
        return ((long (__stdcall*)(void*, void*, void**))fn)(saved2, saved, ppv);
    }

    *ppv = 0;
    return (long)0x80004005;
}
