// from server: 45% by atomic.potato
extern "C" {
    int __stdcall GetCapture();
    int __stdcall ReleaseCapture();
    int __stdcall SetCapture(int);
    int __stdcall GetMessageA(void*, void*, unsigned int, unsigned int);
    int __stdcall PeekMessageA(void*, void*, unsigned int, unsigned int, unsigned int);
    int __stdcall DispatchMessageA(const void*);
    int __stdcall PtInRect(const void*, int, int);
}

extern void G1_func_007f3b2a(void*);
extern void G1_func_0085b080(void*);
extern void G1_func_0085b840(void*);
extern void G1_func_0085b900();

struct CXTPStatusBarPane {
    char pad_00[0x50];
    void* m_pParent;
    char pad_54[0x24];
    int m_nCapture;
    int m_nOldCapture;
    int Method_85b900();
    int Method_85b840(void*);
    int Method_85b080(void*);
    int Method_85b940(unsigned int, unsigned int);
};

int CXTPStatusBarPane::Method_85b940(unsigned int wParam, unsigned int lParam)
{
    if (m_pParent == 0)
        return 0;

    m_nCapture = 1;
    Method_85b900();

    void* hwnd = *(void**)((char*)m_pParent + 0x20);
    G1_func_007f3b2a(hwnd);

    char msg[0x1c];
    Method_85b840(msg);

    int savedCapture = 0;
    void* pCapture = (void*)GetCapture();
    void* pTarget = m_pParent ? *(void**)((char*)m_pParent + 0x20) : 0;

    while (pCapture == pTarget)
    {
        int result = PtInRect(msg, wParam, lParam);
        if (result != m_nCapture)
        {
            m_nCapture = result;
            Method_85b900();
        }

        if (PeekMessageA(msg, 0, 0, 0, 0) == 0)
            break;

        DispatchMessageA(msg);

        unsigned int m = *(unsigned int*)(msg + 4);
        if (m <= 0x200)
        {
            if (m == 0x200)
            {
                int x = *(short*)(msg + 8);
                int y = *(short*)(msg + 10);
                wParam = x;
                lParam = y;
                continue;
            }
            if (m == 0x1f)
                break;
            if (m == 0x100)
            {
                if (*(unsigned int*)(msg + 8) == 0x1b)
                    break;
                continue;
            }
        }
        else
        {
            if (m == 0x202)
            {
                savedCapture = m_nCapture;
                continue;
            }
            if (m == 0x204)
                break;
        }
        G1_func_0085b080(msg);
    }

    ReleaseCapture();
    m_nCapture = 0;
    Method_85b900();

    if (savedCapture != 0)
        Method_85b080(m_pParent);

    return 0;
}
