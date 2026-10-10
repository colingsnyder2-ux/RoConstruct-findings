// from server: 33% by colin
struct CXTPCommandBarAnimation {
    void* m_pAnimateInfo;
    void* m_pad0;
    void* m_pAnimateInfo2;
    char m_pad[0x18];
    void* m_pCommandBar;
    void Clear();
};

struct CArray_AnimateInfo {
    int m_nSize;
    int m_nGrowBy;
    void* m_pData;
    int m_nCount;
    int m_nCapacity;
    void* m_pExtra;
};

struct CAnimateInfo {
    char m_pad0[0x20];
    int m_nCount;
    char m_pad1[4];
    void* m_pItems;
};

struct CArray_AnimateInfo2 {
    int m_nSize;
    int m_nGrowBy;
    void* m_pData;
    int m_nCount;
    int m_nCapacity;
    void* m_pExtra;
};

extern "C" int (__stdcall *g_pfnKillTimer)(void*, unsigned int);

extern "C" void __fastcall sub_630946(void*);
extern "C" void __fastcall sub_630940(void*);
extern "C" void __fastcall sub_738a18(void*, void*);
extern "C" void __fastcall sub_73850e(void*, int);
extern "C" void __fastcall sub_6c8df0(void*, void*, void*);
extern "C" void __fastcall sub_6d26b0(void*, int, int);
extern "C" void __fastcall sub_6c9080(void*);
extern "C" void __fastcall sub_62fc62(void*);
extern "C" void __fastcall sub_62ff20(void);

void CXTPCommandBarAnimation::Clear()
{
    CArray_AnimateInfo* pArray = (CArray_AnimateInfo*)this;
    int i;
    int nCount = pArray->m_nCount;
    void* pData = pArray->m_pData;

    for (i = 0; i < nCount; i++) {
        CAnimateInfo* pInfo = (CAnimateInfo*)((char*)pData + i * 4);
        int j;
        for (j = 0; j < pInfo->m_nCount; j++) {
            sub_738a18((char*)pInfo->m_pItems + j * 0x10, 0);
        }
        sub_6c8df0(this, pInfo, 0);
        sub_73850e(pInfo, 0);
        if (pInfo->m_nCount > 6) {
            sub_6d26b0((char*)this + 0x1c, i, 1);
            sub_6c9080(pInfo);
            sub_62fc62(pInfo);
            i--;
        }
    }

    if (pArray->m_nCount == 0 && pArray->m_pData != 0) {
        g_pfnKillTimer(*(void**)((char*)this + 0x20), 0xacd43);
        pArray->m_pData = 0;
    }
}
