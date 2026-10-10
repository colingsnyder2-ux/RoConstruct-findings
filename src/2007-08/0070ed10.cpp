// from server: 86% by colin
struct CXTSplitterWndThemeFactory {
    int CreateTheme(void* p1, void* p2, void* p3, void** ppOut);
};

int CXTSplitterWndThemeFactory::CreateTheme(void* p1, void* p2, void* p3, void** ppOut) {
    void* pObj = p1;
    void** vtable = *(void***)pObj;
    typedef int (__stdcall *Fn)(void*, void*, void*);
    Fn fn = (Fn)vtable[15];
    int result = fn(pObj, p2, p3);
    *ppOut = (void*)result;
    return 0;
}
