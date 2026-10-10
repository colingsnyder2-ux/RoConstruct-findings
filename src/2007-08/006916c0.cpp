// from server: 64% by colin
struct CXTSplitterWnd {
    char pad[0x20];
    void* m_hWnd;
    char pad2[0x74];
    int m_bSplit;
    char pad3[0x60];
    int m_rectLeft;
    int m_rectTop;
    int m_rectRight;
    int m_rectBottom;
    int m_minLeft;
    int m_minTop;
    int m_maxRight;
    int m_maxBottom;
    int m_trackLeft;
    int m_trackTop;
    int m_trackRight;
    int m_trackBottom;
    int m_lastLeft;
    int m_lastTop;
    int m_lastRight;
    int m_lastBottom;
    int m_dragMode;
    char pad4[0x30];
    int m_redrawLeft;
    int m_redrawTop;
    int m_redrawRight;
    int m_redrawBottom;

    void OnMouseMove(int x, int y, unsigned int flags);
    void DrawSplitBar(int x, int y, int mode);
    void DrawTracker(int x, int y, int mode);
    void RecalcLayout(int x, int y, int mode);
    void UpdateWindow();
};

extern "C" void* __stdcall GetCapture();
extern "C" int __stdcall OffsetRect(void* rect, int dx, int dy);
extern "C" int __stdcall RedrawWindow(void* hwnd, const void* rect, void* rgn, unsigned int flags);

void CXTSplitterWnd::OnMouseMove(int x, int y, unsigned int flags)
{
    if (m_dragMode == 0)
    {
        RecalcLayout(x, y, flags);
        return;
    }

    void* capture = GetCapture();
    if (capture != this)
    {
        void** vtable = *(void***)this;
        void (__thiscall *fn)(void*, int) = (void (__thiscall *)(void*, int))vtable[0x1a8 / 4];
        fn(this, 0);
    }

    if (m_bSplit == 0)
    {
        void** vtable = *(void***)this;
        int (__thiscall *fn)(void*, int, int, unsigned int) = (int (__thiscall *)(void*, int, int, unsigned int))vtable[0x188 / 4];
        int result = fn(this, x, y, flags);
        void** vtable2 = *(void***)this;
        void (__thiscall *fn2)(void*, int) = (void (__thiscall *)(void*, int))vtable2[0x1a0 / 4];
        fn2(this, result);
        return;
    }

    int newX = x + m_rectLeft;
    int newY = y + m_rectTop;

    if (newY < m_minTop)
        newY = m_minTop;
    else if (newY > m_maxBottom)
        newY = m_maxBottom;

    if (newX < m_minLeft)
        newX = m_minLeft;
    else if (newX > m_maxRight)
        newX = m_maxRight;

    int mode = m_dragMode;

    if (mode == 1 || (mode >= 0x65 && mode <= 0x73))
    {
        if (m_trackTop != newY)
        {
            void** vtable = *(void***)this;
            void (__thiscall *fn)(void*, void*) = (void (__thiscall *)(void*, void*))vtable[0x150 / 4];
            fn(this, &m_trackTop);
            OffsetRect(&m_trackTop, 0, newY - m_trackTop);
            void** vtable2 = *(void***)this;
            void (__thiscall *fn2)(void*, void*) = (void (__thiscall *)(void*, void*))vtable2[0x150 / 4];
            fn2(this, &m_trackTop);
        }
    }
    else if (mode == 2 || (mode >= 0xc9 && mode <= 0xd7))
    {
        if (m_trackLeft != newX)
        {
            void** vtable = *(void***)this;
            void (__thiscall *fn)(void*, void*) = (void (__thiscall *)(void*, void*))vtable[0x150 / 4];
            fn(this, &m_trackLeft);
            OffsetRect(&m_trackLeft, newX - m_trackLeft, 0);
            void** vtable2 = *(void***)this;
            void (__thiscall *fn2)(void*, void*) = (void (__thiscall *)(void*, void*))vtable2[0x150 / 4];
            fn2(this, &m_trackLeft);
        }
    }
    else if (mode == 3 || (mode >= 0x12d && mode <= 0x20d))
    {
        if (m_trackTop != newY)
        {
            void** vtable = *(void***)this;
            void (__thiscall *fn)(void*, void*) = (void (__thiscall *)(void*, void*))vtable[0x150 / 4];
            fn(this, &m_trackTop);
            OffsetRect(&m_trackTop, 0, newY - m_trackTop);
            void** vtable2 = *(void***)this;
            void (__thiscall *fn2)(void*, void*) = (void (__thiscall *)(void*, void*))vtable2[0x150 / 4];
            fn2(this, &m_trackTop);
        }
        if (m_trackLeft != newX)
        {
            void** vtable = *(void***)this;
            void (__thiscall *fn)(void*, void*) = (void (__thiscall *)(void*, void*))vtable[0x150 / 4];
            fn(this, &m_trackLeft);
            OffsetRect(&m_trackLeft, newX - m_trackLeft, 0);
            void** vtable2 = *(void***)this;
            void (__thiscall *fn2)(void*, void*) = (void (__thiscall *)(void*, void*))vtable2[0x150 / 4];
            fn2(this, &m_trackLeft);
        }
    }

    DrawSplitBar(newX, newY, 1);
    DrawTracker(newX, newY, 1);

    if (m_redrawLeft != newX || m_redrawTop != newY)
    {
        RedrawWindow(m_hWnd, 0, 0, 0x180);
        m_redrawLeft = newX;
        m_redrawTop = newY;
    }
}
