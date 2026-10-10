// from server: 69% by colin
struct CXTPPropExchangeEnumerator {
    int unknown0;
    void* m_pEnumerator;
    int unknown8;
    void* m_pNode;
    int Set(void* pNode, int bCreate);
};

extern "C" int __stdcall sub_685720(void* pEnumerator, const char* name, void** ppNode, int bCreate);

int CXTPPropExchangeEnumerator::Set(void* pNode, int bCreate) {
    void* pEnum = m_pEnumerator;
    m_pNode = pNode;
    if (pEnum == 0) {
        return 0;
    }
    if (bCreate == 0) {
        sub_685720(pEnum, (const char*)0x7cb0b8, &m_pNode, 0);
        return m_pNode != 0;
    }
    if (*(int*)((char*)pEnum + 0x24) == 0) {
        void** vtbl = *(void***)pEnum;
        typedef void (__stdcall *Fn)(void*, void*);
        Fn fn = (Fn)vtbl[0x78 / 4];
        fn(pEnum, pNode);
        return m_pNode != 0;
    }
    void** vtbl = *(void***)pEnum;
    typedef void* (__stdcall *Fn2)(void*);
    Fn2 fn2 = (Fn2)vtbl[0x7c / 4];
    m_pNode = fn2(pEnum);
    return m_pNode != 0;
}
