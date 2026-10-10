// from server: 59% by colin
struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

struct CXTPTabManagerItem {
    char pad[0x90];
    CRect rcItem;
};

struct CXTPTabManager {
    char pad[0x14];
    void* pPaintManager;
};

struct CXTPDockingPaneAutoHidePanel_CAutoHidePanelTabManager {
    char pad[4];
    CXTPTabManagerItem** ppItems;
    int nCount;
    char pad2[8];
    CXTPTabManager* pTabManager;

    void DrawStaticFrame(CRect* pRect);
};

extern "C" int __stdcall IntersectRect(CRect* lprcDst, const CRect* lprcSrc1, const CRect* lprcSrc2);

extern "C" void* __stdcall sub_6e0550(void* p);
extern "C" void __cdecl sub_62ff20();

void CXTPDockingPaneAutoHidePanel_CAutoHidePanelTabManager::DrawStaticFrame(CRect* pRect) {
    CRect rcClip;
    CRect rcIntersect;
    int i;
    int nCount;
    CXTPTabManagerItem* pItem;
    CRect* pItemRect;
    void* pObj;

    ((void (__thiscall*)(void*, CRect*))((*(void***)this->pTabManager)[0x58 / 4]))(this->pTabManager, &rcClip);

    pObj = *(void**)((char*)sub_6e0550((char*)this->pTabManager + 0x54) + 0xa0);

    nCount = this->nCount;
    i = 0;
    if (nCount > 0) {
        do {
            if (i < 0 || i >= nCount) {
                sub_62ff20();
            }
            pItem = this->ppItems[i];
            pItemRect = &pItem->rcItem;
            if (IntersectRect(&rcIntersect, pItemRect, &rcClip)) {
                CRect rcTemp;
                rcTemp = *pItemRect;
                ((void (__thiscall*)(void*, CXTPTabManagerItem*, CRect*, CRect*))((*(void***)pObj)[0x58 / 4]))(pObj, pItem, &rcTemp, pRect);
            }
            nCount = this->nCount;
            i++;
        } while (i < nCount);
    }
}
