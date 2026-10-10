// from server: 88% by colin
extern "C" {
    int __stdcall GetWindowRect(void*, void*);
    int __stdcall KillTimer(void*, unsigned int);
    int __stdcall SetTimer(void*, unsigned int, unsigned int, void*);
}

struct CXTPDockingPaneMiniWnd {
    char pad[0x20];
    void* m_hWnd;
    char pad2[0x100 - 0x24];
    int m_rect[4];
    int m_124;
    int m_128;
    int m_12c;
    int m_130;
    int m_134;
    int m_138;
    int m_13c;
    void OnTimer(unsigned int);
    void Init();
};

void CXTPDockingPaneMiniWnd::Init()
{
    int v;
    if (*(int*)0x8b8888 != 0) {
        v = *(int*)0x8b888c / *(int*)0x8b8888;
        if (v < 1)
            v = 1;
    } else {
        v = 1;
    }
    m_128 = v;
    m_12c = v;
    GetWindowRect(m_hWnd, &m_rect[0]);
    m_124 = m_rect[2] - m_rect[0];
    m_134 = 1;
    if (m_13c != 0) {
        m_13c = 0;
        KillTimer(m_hWnd, 3);
        OnTimer(0xb);
    }
    m_138 = 1;
    m_130 = 6;
    SetTimer(m_hWnd, 1, 0x64, 0);
}
