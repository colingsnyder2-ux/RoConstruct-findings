// from server: 86% by colin
struct VCWorkspace_CComObject {
    long __stdcall QueryInterface(const void* riid, void** ppvObject);
};

long __stdcall VCWorkspace_CComObject::QueryInterface(const void* riid, void** ppvObject)
{
    if (ppvObject == 0)
        return 0x80004003;

    *ppvObject = 0;

    const unsigned int* p = (const unsigned int*)riid;

    if (p[0] == 0xb196b286 &&
        p[1] == *(const unsigned int*)0x784e94 &&
        p[2] == *(const unsigned int*)0x784e98 &&
        p[3] == *(const unsigned int*)0x784e9c)
    {
        *ppvObject = (void*)riid;
        void** vtbl = *(void***)riid;
        void (__stdcall *fn)(const void*) = (void (__stdcall *)(const void*))vtbl[1];
        fn(riid);
        return 0;
    }

    if (p[0] == 0 &&
        p[1] == 0 &&
        p[2] == 0xc0 &&
        p[3] == 0x46000000)
    {
        *ppvObject = (void*)riid;
        void** vtbl = *(void***)riid;
        void (__stdcall *fn)(const void*) = (void (__stdcall *)(const void*))vtbl[1];
        fn(riid);
        return 0;
    }

    return 0x80004002;
}
