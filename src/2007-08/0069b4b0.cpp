// from server: 70% by colin
extern "C" __declspec(dllimport) unsigned int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);

struct CXTPPropertyGridView {
    char pad[0x20];
    void* m_hWnd;
    char pad2[0x8c];
    void* m_pItem;
    void OnItemChanged(void* item);
    int GetItemState(void* item, int state);
    void* GetPaintManager();
};

struct CXTPItem {
    char pad[0x08];
    int m_nIndex;
    char pad2[0x0c];
    void* m_pData;
    char pad3[0x0c];
    int m_nState;
    char pad4[0x04];
    int m_nType;
};

extern "C" void* __stdcall sub_7383BE(void*);
extern "C" void __stdcall sub_680000(void*, void*);
extern "C" void __stdcall sub_6308B0(void*, void*, void*);
extern "C" unsigned char __stdcall sub_738412(void*);

void CXTPPropertyGridView::OnItemChanged(void* item)
{
    CXTPItem* pItem = (CXTPItem*)item;
    void* pPaintManager = GetPaintManager();
    if (pItem->m_nType != 0)
    {
        unsigned int msg = SendMessageA(m_hWnd, 0x18b, 0, 0);
        if (pItem->m_nIndex == (int)(msg - 1))
        {
            void* pData = sub_7383BE(pItem->m_pData);
            void* local;
            sub_680000(&local, this);
            void* pTarget = *(void**)((char*)pPaintManager + 0x34);
            int nState = pItem->m_nState;
            void* pArg = (void*)((char*)pTarget + 0x70);
            int nVal = *(int*)((char*)pArg + 8);
            if (nVal == -1)
                pArg = *(void**)((char*)pArg + 4);
            else
                pArg = (void*)nVal;
            sub_6308B0(pData, &nState, pArg);
        }
        if ((sub_738412(m_pItem) & 0x10) != 0)
        {
            if (GetItemState(item, 6) == 1)
                return;
        }
        void* vtbl = *(void**)pPaintManager;
        void (*fn)(void*, void*) = *(void (**)(void*, void*))((char*)vtbl + 0x1c);
        fn(pPaintManager, item);
    }
}
