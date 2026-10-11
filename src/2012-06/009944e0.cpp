// from server: 84% by atomic.potato
struct CXTPCommandBar {
    char pad0[0x20];
    unsigned int m_hWnd;
    char pad1[0xfc - 0x24];
    void* m_pControls;
    int GetDlgCtrlIDHelper(int x, int y);
};

extern "C" int __stdcall GetDlgCtrlID(unsigned int hWnd);

struct CXTPControls {
    char pad0[0x8c];
    int m_nCount;
    char pad1[0x15c - 0x90];
    void* m_pSelected;
};

struct CXTPControl {
    char pad0[0x28];
    int m_nWidth;
    char pad1[0x30 - 0x2c];
    int m_nHeight;
};

int CXTPCommandBar::GetDlgCtrlIDHelper(int x, int y)
{
    void* p = 0;
    int result;
    result = ((int (__thiscall*)(void*, int, int))0x9cf4d0)(m_pControls, x, y);
    if (result != 0) {
        CXTPControls* pControls = (CXTPControls*)result;
        int nCount = pControls->m_nCount;
        if (nCount > 0) {
            return nCount + 0x10000;
        }
        CXTPControl* pControl = (CXTPControl*)pControls->m_pSelected;
        if (pControl != 0) {
            int h = pControl->m_nHeight;
            if (h > 0) {
                return h + 0x10000;
            }
            return pControl->m_nWidth + 0x10000;
        }
        return *(int*)((char*)pControls + 0x84) + 0x10000;
    }
    unsigned int id = GetDlgCtrlID(m_hWnd);
    if (id != 0) {
        return id + 0x50000;
    }
    return 0;
}
