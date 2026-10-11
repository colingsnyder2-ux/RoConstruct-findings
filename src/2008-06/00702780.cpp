// from server: 21% by colin
// roc 2008-06 00702780  unit: CXTPControlTabWorkspace  size: 315 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00702780

struct CXTPTabClientWnd;

struct CXTPTabWorkspace {
    char pad0[0x100];
    void* m_pTabClientWnd;      // +0x100
    char pad1[0x74];
    void* m_pTabControl;        // +0x178
    char pad2[0x8c];
    int   m_nSomething;         // +0x208

    int Method(int a, int b, int c);
};

struct CXTPTabControl {
    char pad0[0x18];
    void* m_pItems;             // +0x18
    char pad1[0x8];
    int   m_nCurSel;            // +0x20
    int   m_nCount;             // +0x24
    char pad2[0x4];
    int   m_nItemData;          // +0x2c
    char pad3[0x14];
    int   m_rcLeft;             // +0x44
    int   m_rcTop;              // +0x48
    int   m_rcRight;            // +0x4c
    int   m_rcBottom;           // +0x50
};

struct CXTPTabItem {
    char pad0[0x20];
    int  m_nIndex;              // +0x20
    int  m_nCount;              // +0x24
    char pad1[0x4];
    int  m_nData;               // +0x2c
    char pad2[0x14];
    int  m_rcLeft;              // +0x44
    int  m_rcTop;               // +0x48
    int  m_rcRight;             // +0x4c
    int  m_rcBottom;            // +0x50
};

struct CXTPTabClientWnd {
    char pad0[0xdc];
    int  m_nPosition;           // +0xdc
};

extern "C" {
    int __stdcall sub_77C420(void* pThis, int a, int b);
    int __stdcall sub_709F20(int a, int b, int c, int d, int e, int f, int g, int h);
    int __stdcall sub_802FD8(void* p);
    int __stdcall sub_803F14(void* p);
}

int CXTPTabWorkspace::Method(int a, int b, int c)
{
    if (m_nSomething == 0)
        return -1;

    CXTPTabControl* pCtrl = (CXTPTabControl*)m_pTabControl;
    CXTPTabItem* pItem = (CXTPTabItem*)sub_77C420(pCtrl, b, c);
    if (pItem == 0)
        return 0;

    CXTPTabClientWnd* pWnd = (CXTPTabClientWnd*)pCtrl->m_pItems;
    if (pWnd->m_nPosition == 0)
        return 0;

    if (pWnd->m_nPosition == 2)
    {
        if (pItem->m_nIndex >= pItem->m_nCount)
            return 0;
    }

    int result = sub_709F20(
        a,
        pCtrl->m_nCurSel,
        pItem->m_rcLeft,
        pItem->m_rcTop,
        pItem->m_rcRight,
        pItem->m_rcBottom,
        pItem->m_nData,
        (int)&pItem->m_nData);

    sub_803F14(&pItem->m_nData);
    return pItem->m_nData;
}
