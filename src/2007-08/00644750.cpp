// from server: 63% by colin
struct CXTPCommandBar {
    char pad[0x20];
    void* m_hWnd;
    char pad2[0xa4];
    int m_nIndexA;
    int m_nIndexB;
    char pad3[0x58];
    void* m_pSomething;

    void OnCommand(unsigned int nID);
};

extern "C" {
    __declspec(dllimport) int __stdcall KillTimer(void*, unsigned int);
}

void* __stdcall sub_62FF20();
void* __stdcall sub_630202(void*);
void* __stdcall sub_63023E();
void* __stdcall sub_631E60();
void* __stdcall sub_633900(void*);
void* __stdcall sub_634CA0(void*, int, void*);
void* __stdcall sub_63A8C0(void*);
void* __stdcall sub_643980();
void* __stdcall sub_644720(int);
void* __stdcall sub_6704F0(void*);
void* __stdcall sub_670850(void*);
void* __stdcall sub_6C90E0(void*);

void CXTPCommandBar::OnCommand(unsigned int nID)
{
    sub_63023E();
    if (nID == 0xccca) {
        void* pCtrl = sub_643980();
        int* pArr = (int*)sub_633900(pCtrl);
        int nCount = pArr[4];
        int nIndex = -1;
        if (nCount > 0) {
            nIndex = nCount - 1;
            if (nIndex >= 0 && nIndex < pArr[4]) {
                nIndex = *(int*)(pArr[3] + nIndex * 4);
            } else {
                sub_62FF20();
                nIndex = 0;
            }
        } else {
            nIndex = 0;
        }
        if (nIndex == (int)this) {
            if (sub_631E60() == 0) {
                void* pCtrl2 = sub_643980();
                sub_634CA0(pCtrl2, 1, this);
                return;
            }
        }
    } else if (nID == 0xacd43) {
        sub_6C90E0(*(void**)((char*)this + 0x178));
        return;
    } else if (nID == 0x1b65f) {
        if (*(int*)((char*)this + 0x128) != 0)
            return;
        KillTimer(m_hWnd, nID);
        int nIndex = m_nIndexA;
        if (nIndex == -1)
            return;
        void* pObj = sub_644720(nIndex);
        (*(void(__thiscall**)(void*, int))(*(int*)pObj + 0x100))(pObj, nIndex);
        return;
    } else if (nID == 0x1b660) {
        if (*(int*)((char*)this + 0x128) != 0)
            return;
        KillTimer(m_hWnd, nID);
        int nIndexB = m_nIndexB;
        if (nIndexB == -1)
            return;
        if (m_nIndexA != nIndexB)
            return;
        void* pObj = sub_644720(nIndexB);
        void* pResult = sub_6704F0(pObj);
        void* pFinal = sub_630202(pResult);
        if (pFinal == 0)
            return;
        if (sub_63A8C0(pFinal) == 0)
            return;
        sub_670850(pFinal);
        return;
    }
}
