// from server: 56% by tester
struct CXTPCommandBarAnimation {
    void* m_pAnimateInfo;
    void* m_pad0;
    void* m_pAnimateInfo2;
    char m_pad[0x18];
    void* m_pCommandBar;
    void Clear();
};

struct CArrayBase {
    void* m_pData;
    int m_nGrowBy;
    int m_nSize;
    int m_nMaxSize;
    void* m_pFreeList;
    int m_nBlockSize;
    int m_nCount;
    void* m_pElements;
    int m_nElementCount;
    void SetSize(int nNewSize, int nGrowBy);
};

extern "C" void __stdcall sub_62fc62(void* p);
extern "C" void __fastcall sub_62ff20();
extern "C" void __stdcall sub_6ffab0(void* p, int a, int b);
extern "C" void* __stdcall KillTimer(void* hWnd, unsigned int uID);

struct VCRectCArray {
    void* m_pVtable;
    char m_pad0[0xc];
    void* m_pTimer;
    char m_pad1[0x8];
    CArrayBase m_array;
    void Clear();
};

void VCRectCArray::Clear()
{
    int i = 0;
    if (m_array.m_nCount > 0) {
        do {
            if (i < 0 || i >= m_array.m_nCount) {
                sub_62ff20();
            }
            CXTPCommandBarAnimation* p = ((CXTPCommandBarAnimation**)m_array.m_pElements)[i];
            if (p == 0) {
                p->Clear();
                sub_62fc62(p);
            }
            i++;
        } while (i < m_array.m_nCount);
    }
    sub_6ffab0(&m_array, 0, -1);
    if (m_pTimer != 0) {
        if (m_pVtable != 0) {
            if (*(void**)((char*)m_pVtable + 0x20) != 0) {
                KillTimer(*(void**)((char*)m_pVtable + 0x20), 0xacd43);
            }
        }
    }
    m_pTimer = 0;
}
