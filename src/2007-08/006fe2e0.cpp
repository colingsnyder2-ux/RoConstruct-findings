// from server: 35% by colin
struct CXTPTabManagerItem;

struct CXTPTabManagerItems {
    void *m_pData;
    int m_nCount;
    int m_nCapacity;
};

struct CXTPTabManagerItem {
    void *m_pVtable;
    int m_nField04;
    int m_nField08;
    int m_nField0C;
    int m_nField10;
    int m_nField14;
    int m_nField18;
    int m_nField1C;
    int m_nField20;
    char m_rect24[16];
    char m_rect34[16];
    char m_rect44[16];
    char m_field54[20];
    CXTPTabManagerItems m_items68;
    char m_field7C[12];
    int m_nField84;
    int m_nField88;
    CXTPTabManagerItem *CXTPTabManagerItem_ctor(CXTPTabManagerItem *pOwner);
};

extern "C" void *__cdecl operator_new(unsigned int size);
extern "C" void __stdcall SetRectEmpty(void *lprc);

void __stdcall sub_68B840(void *p);
void __stdcall sub_69E7A0(void *p);
void __stdcall sub_6FE090(void *p);
void __stdcall sub_6D2910(void *pThis, void *pItem, void *pItem2);
void *__stdcall sub_6FE2B0(void *pThis, void *pOwner);
void *__stdcall sub_6FDC30(void *pThis, void *pOwner, int n);
void *__stdcall sub_6FDCB0(void *pThis, void *pOwner, int n);
void *__stdcall sub_6FDD30(void *pThis, void *pOwner, int n);

CXTPTabManagerItem *__thiscall CXTPTabManagerItem::CXTPTabManagerItem_ctor(CXTPTabManagerItem *pOwner)
{
    CXTPTabManagerItem *pThis = this;
    void *pTemp;
    void *pItem;

    pThis->m_pVtable = (void *)0x7dcedc;
    pThis->m_nField04 = 0;
    pThis->m_nField08 = 0;
    pThis->m_nField0C = 0;
    pThis->m_nField10 = 0;
    pThis->m_nField14 = 0;
    pThis->m_nField18 = 1;
    pThis->m_nField1C = 1;
    pThis->m_nField20 = 0;
    pThis->m_nField88 = 0x14;

    sub_68B840(&pThis->m_field54[0]);
    sub_6FE090(&pThis->m_items68);
    sub_69E7A0(&pThis->m_field7C[0]);

    SetRectEmpty(&pThis->m_rect24[0]);
    SetRectEmpty(&pThis->m_rect34[0]);
    SetRectEmpty(&pThis->m_rect44[0]);

    pTemp = operator_new(0xc);
    if (pTemp != 0) {
        pItem = sub_6FE2B0(pTemp, pThis);
    } else {
        pItem = 0;
    }
    pThis->m_nField84 = (int)pItem;

    pTemp = operator_new(0x30);
    if (pTemp != 0) {
        pItem = sub_6FDC30(pTemp, pThis, 1);
    } else {
        pItem = 0;
    }
    sub_6D2910(&pThis->m_items68, pItem, (void *)pThis->m_items68.m_nCount);

    pTemp = operator_new(0x30);
    if (pTemp != 0) {
        pItem = sub_6FDCB0(pTemp, pThis, 1);
    } else {
        pItem = 0;
    }
    sub_6D2910(&pThis->m_items68, pItem, (void *)pThis->m_items68.m_nCount);

    pTemp = operator_new(0x30);
    if (pTemp != 0) {
        pItem = sub_6FDD30(pTemp, pThis, 0);
    } else {
        pItem = 0;
    }
    sub_6D2910(&pThis->m_items68, pItem, (void *)pThis->m_items68.m_nCount);

    return pThis;
}
