// from server: 40% by atomic.potato
struct CXTSplitterWnd {
    char pad0[0x20];
    void* m_hWnd;
    char pad1[0x98 - 0x24];
    int m_bSplitterActive;
    char pad2[0xa0 - 0x9c];
    int m_rcLeft;
    int m_rcTop;
    int m_rcRight;
    int m_rcBottom;
    int m_rcMinLeft;
    int m_rcMinTop;
    int m_rcMinRight;
    int m_rcMinBottom;
    int m_rcTrackLeft;
    int m_rcTrackTop;
    int m_rcTrackRight;
    int m_rcTrackBottom;
    char pad3[0xd8 - 0xcc];
    int m_nHitTest;
    char pad4[0xfc - 0xdc];
    int m_bTracking;
    char pad5[0x10c - 0x100];
    int m_ptTrackX;
    int m_ptTrackY;

    void OnMouseMove(unsigned int nFlags, int x, int y);
    void TrackMove(int x, int y, int bRedraw);
    void DoMove(int x, int y, int bRedraw);
    void RecalcLayout(int x, int y, int bRedraw);
};

extern "C" void* __stdcall GetCapture();
extern "C" int __stdcall OffsetRect(void* lprc, int dx, int dy);
extern "C" int __stdcall RedrawWindow(void* hWnd, const void* lprcUpdate, void* hrgnUpdate, unsigned int flags);

extern "C" void* __stdcall sub_718d02(void* hWnd);
extern "C" void __stdcall sub_84c6a4();
extern "C" void __stdcall sub_84c6aa();

void CXTSplitterWnd::OnMouseMove(unsigned int nFlags, int x, int y)
{
    if (m_bTracking == 0)
    {
        sub_84c6aa();
        return;
    }

    if (sub_718d02(GetCapture()) != this)
    {
        void** vt = *(void***)this;
        void (__stdcall *fn)(void*, int) = (void (__stdcall *)(void*, int))vt[0x1b0 / 4];
        fn(this, 0);
    }

    if (m_bSplitterActive == 0)
    {
        void** vt = *(void***)this;
        int (__stdcall *fn)(void*, int, int) = (int (__stdcall *)(void*, int, int))vt[0x190 / 4];
        int r = fn(this, x, y);
        void (__stdcall *fn2)(void*, int) = (void (__stdcall *)(void*, int))vt[0x1a8 / 4];
        fn2(this, r);
        return;
    }

    int newX = x + m_rcLeft;
    int newY = y + m_rcTop;

    if (newY < m_rcMinTop || newY > m_rcMinBottom)
        newY = m_rcMinBottom;
    if (newX < m_rcMinLeft || newX > m_rcMinRight)
        newX = m_rcMinRight;

    int nHit = m_nHitTest;

    if (nHit == 1 || (nHit >= 0x65 && nHit <= 0x73))
    {
        if (m_rcTrackTop != newY)
        {
            void** vt = *(void***)this;
            void (__stdcall *fn)(void*, int*) = (void (__stdcall *)(void*, int*))vt[0x158 / 4];
            fn(this, &m_rcTrackTop);
            OffsetRect(&m_rcTrackTop, 0, newY - m_rcTrackTop);
            fn(this, &m_rcTrackTop);
        }
    }
    else if (nHit == 2 || (nHit >= 0xc9 && nHit <= 0xd7))
    {
        if (m_rcTrackLeft != newX)
        {
            void** vt = *(void***)this;
            void (__stdcall *fn)(void*, int*) = (void (__stdcall *)(void*, int*))vt[0x158 / 4];
            fn(this, &m_rcTrackLeft);
            OffsetRect(&m_rcTrackLeft, newX - m_rcTrackLeft, 0);
            fn(this, &m_rcTrackLeft);
        }
    }
    else if (nHit == 3 || (nHit >= 0x12d && nHit <= 0x20d))
    {
        if (m_rcTrackTop != newY)
        {
            void** vt = *(void***)this;
            void (__stdcall *fn)(void*, int*) = (void (__stdcall *)(void*, int*))vt[0x158 / 4];
            fn(this, &m_rcTrackTop);
            OffsetRect(&m_rcTrackTop, 0, newY - m_rcTrackTop);
            fn(this, &m_rcTrackTop);
        }
        if (m_rcTrackLeft != newX)
        {
            void** vt = *(void***)this;
            void (__stdcall *fn)(void*, int*) = (void (__stdcall *)(void*, int*))vt[0x158 / 4];
            fn(this, &m_rcTrackLeft);
            OffsetRect(&m_rcTrackLeft, newX - m_rcTrackLeft, 0);
            fn(this, &m_rcTrackLeft);
        }
    }

    DoMove(newX, newY, 1);
    sub_84c6a4();

    if (m_ptTrackX != x || m_ptTrackY != y)
    {
        RedrawWindow(m_hWnd, 0, 0, 0x180);
        m_ptTrackX = x;
        m_ptTrackY = y;
    }
}
