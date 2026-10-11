// from server: 69% by colin
struct CXTPStatusBar;

extern "C" int __stdcall GetPane(CXTPStatusBar* pBar, int nIndex);
extern "C" void __stdcall SetPane(CXTPStatusBar* pBar, int nIndex, int nValue);

struct CStatusCmdUI
{
    int m_nIndex;
    int m_nID;
    int m_nPane;
    int m_bEnabled;
    CXTPStatusBar* m_pStatusBar;
    void SetCheck(int bCheck);
};

void CStatusCmdUI::SetCheck(int bCheck)
{
    CXTPStatusBar* pBar = m_pStatusBar;
    if (pBar != 0)
    {
        int nState = GetPane(pBar, m_nIndex);
        nState &= ~0x200;
        if (bCheck != 0)
            nState |= 0x200;
        SetPane(pBar, m_nIndex, nState);
    }
}
