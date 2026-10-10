// from server: 82% by colin
struct CXTPCommandBar {
    char pad[0x20];
    unsigned int m_hWnd;
    char pad2[0xf8 - 0x24];
    void* m_pControls;

    int HitTest(int x, int y);
};

extern "C" int __stdcall GetDlgCtrlID(unsigned int hWnd);

struct CXTPControl {
    char pad[0x28];
    int m_nWidth;
    char pad2[0x30 - 0x2c];
    int m_nHeight;
    char pad3[0x84 - 0x34];
    int m_nID;
    char pad4[0x8c - 0x88];
    int m_nIndex;
    char pad5[0x158 - 0x90];
    CXTPControl* m_pParent;
};

extern "C" CXTPControl* __stdcall FindControl(void* pControls, int x, int y);

int CXTPCommandBar::HitTest(int x, int y)
{
    CXTPControl* pControl = FindControl(m_pControls, (short)x, (short)((unsigned int)x >> 16));
    if (pControl != 0)
    {
        if (pControl->m_nIndex > 0)
        {
            return pControl->m_nIndex + 0x10000;
        }
        if (pControl->m_pParent != 0)
        {
            if (pControl->m_pParent->m_nHeight > 0)
            {
                return pControl->m_pParent->m_nHeight + 0x10000;
            }
            return pControl->m_pParent->m_nWidth + 0x10000;
        }
        return pControl->m_nID + 0x10000;
    }
    unsigned short id = (unsigned short)GetDlgCtrlID(m_hWnd);
    if (id != 0)
    {
        return id + 0x50000;
    }
    return 0;
}
