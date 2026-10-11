// from server: 29% by atomic.potato
struct CXTPControls {
    char pad0[0x28];
    int m_nCount;
    void* m_pData;
    char pad30[0xc];
    void* m_pOriginalControls;
    void SetOriginalControls(void* p);
    void RemoveAll();
    void Add(void* p, int n, int m);
    void* GetAt(int n);
    void* CreateControl();
    void CopyOriginalControls();
};

struct CXTPControl {
    char pad0[0xac];
    int m_bSomeFlag;
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

void CXTPControls::CopyOriginalControls()
{
    void* pOrig;
    CXTPControl* pCtrl;
    int i;
    int nCount;

    RemoveAll();

    pOrig = operator_new(0x44);
    if (pOrig != 0)
        pCtrl = (CXTPControl*)pOrig;
    else
        pCtrl = 0;

    nCount = m_nCount;
    for (i = 0; i < nCount; i++)
    {
        CXTPControl* pItem = (CXTPControl*)GetAt(i);
        if (pItem->m_bSomeFlag == 0)
        {
            CXTPControl* pItem2 = (CXTPControl*)GetAt(i);
            Add(pItem2, -1, 1);
        }
        nCount = m_nCount;
    }

    SetOriginalControls(pCtrl);
}
