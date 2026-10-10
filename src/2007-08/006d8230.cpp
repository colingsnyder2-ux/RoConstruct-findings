// from server: 54% by colin
struct CMap {
    void* m_pVtable;
    char pad0[0x1c];
    void* m_pField20;
    void* m_pField24;
    char m_field28[0x1c];
    char m_field44[0x40];
    int m_field80;
    void* m_pField84;
    void construct(void* pArg);
};

extern "C" void __stdcall sub_0073833a();
extern "C" void __stdcall sub_006d80b0(void* p, int n);
extern "C" void __stdcall sub_0066f110(void* p, int n);
extern "C" void __stdcall sub_006e5260(void* p, int a, void* b);

void CMap::construct(void* pArg)
{
    sub_0073833a();
    m_pVtable = (void*)0x7d8c6c;
    sub_006d80b0((char*)this + 0x28, 10);
    sub_0066f110((char*)this + 0x44, 10);
    m_pField84 = pArg;
    m_field80 = 1;
    m_pField20 = 0;
    m_pField24 = 0;
    *(void**)((char*)this + 0x60) = 0;
    *(void**)((char*)this + 0x64) = 0;
    *(void**)((char*)this + 0x68) = 0;
    *(void**)((char*)this + 0x6c) = 0;
    *(void**)((char*)this + 0x70) = 0;
    *(void**)((char*)this + 0x74) = 0;
    *(void**)((char*)this + 0x78) = 0;
    *(void**)((char*)this + 0x7c) = 0;

    void* pObj = m_pField84;
    void** vtbl = *(void***)pObj;
    void* (__stdcall *fn)(void*, int, void*) = (void* (__stdcall *)(void*, int, void*))vtbl[0x144 / 4];
    m_pField24 = fn(pObj, 4, this);

    pObj = m_pField84;
    vtbl = *(void***)pObj;
    fn = (void* (__stdcall *)(void*, int, void*))vtbl[0x144 / 4];
    void* r = fn(pObj, 2, this);
    if (r == 0)
        m_pField20 = (char*)r - 0x20;
    else
        m_pField20 = 0;

    void* pObj2 = m_pField84;
    void* pArg2 = *(void**)((char*)pObj2 + 0xcc);
    sub_006e5260(m_pField24, 1, pArg2);
}
