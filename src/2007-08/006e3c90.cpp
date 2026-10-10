// from server: 32% by colin
// roc 2007-08 006e3c90  unit: CXTPDockingPaneSplitterWnd  size: 937 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e3c90

struct CXTPDockingPaneSplitterWnd {
    char pad0[0x20];
    void* m_pWnd;              // 0x20
    char pad1[0x54 - 0x24];
    void* m_pPane;             // 0x54
    int OnMouseMove(unsigned int nFlags, int x, int y);
};

struct CXTPDockingPaneBase {
    char pad0[0xec];
    int m_bSomething;          // 0xec
    char pad1[0xf4 - 0xf0];
    int m_bSomething2;         // 0xf4
};

struct CPoint {
    int x;
    int y;
};

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

struct MSG {
    void* hwnd;
    unsigned int message;
    unsigned int wParam;
    int lParam;
    unsigned int time;
    int pt_x;
    int pt_y;
};

extern "C" {
    int __stdcall ClientToScreen(void* hWnd, CPoint* lpPoint);
    int __stdcall GetCapture(void);
    int __stdcall SetCapture(void* hWnd);
    int __stdcall ReleaseCapture(void);
    int __stdcall GetMessageA(MSG* lpMsg, void* hWnd, unsigned int wMsgFilterMin, unsigned int wMsgFilterMax);
    int __stdcall PeekMessageA(MSG* lpMsg, void* hWnd, unsigned int wMsgFilterMin, unsigned int wMsgFilterMax, unsigned int wRemoveMsg);
    int __stdcall DispatchMessageA(const MSG* lpMsg);
    int __stdcall OffsetRect(CRect* lprc, int dx, int dy);
}

extern "C" {
    void* __stdcall sub_6301c0(void* p);
    void __stdcall sub_66ed20(void* pThis, void* pRect, int bFlag);
    void __stdcall sub_67ffa0(void* pThis, void* pOut);
    void __stdcall sub_6808f0(void* pThis, int n);
    int __stdcall sub_680980(void* pThis, void* pRect, void* pPoint, int x, int y, int z, void* pWnd);
    void* __stdcall sub_6e3660(void);
    void __stdcall sub_6e3970(void* pThis, void* pRect1, void* pRect2);
    void __stdcall sub_6e3a70(void* pThis);
    int __stdcall sub_6e3af0(void* pThis, void* pPoint, void* pRect);
}

extern void* g_77ec3c;
extern void* g_77ec40;
extern void* g_77ec44;
extern void* g_77ec48;
extern void* g_77ed2c;
extern void* g_77edd8;
extern void* g_77edf0;
extern void* g_77ee10;

int CXTPDockingPaneSplitterWnd::OnMouseMove(unsigned int nFlags, int x, int y)
{
    CPoint pt;
    CPoint pt2;
    CRect rc;
    CRect rc2;
    MSG msg;
    CXTPDockingPaneBase* pBase;
    int bCaptured;
    int dx, dy;
    int tmp;

    if (this->m_pPane == 0)
        return 0;

    pBase = (CXTPDockingPaneBase*)sub_6e3660();
    if (pBase->m_bSomething2 != 0)
        return 0;

    sub_67ffa0(&pt, this);

    if (!sub_6e3af0(this, &pt2, &rc))
        return 0;

    sub_6e3a70(this->m_pPane);

    bCaptured = *(int*)((char*)this->m_pPane + 0x90);

    ClientToScreen(this->m_pWnd, &pt2);

    if (pBase->m_bSomething != 0)
    {
        sub_6808f0(&rc2, 0);

        if (!sub_680980(&rc2, &pt, &pt2, bCaptured, rc.left, rc.top, this))
            return 0;

        sub_6e3970(this, &rc, &rc2);

        if (this->m_pPane != 0)
        {
            sub_66ed20(pBase, (char*)this->m_pPane + 0x20, 1);
            return 0;
        }
        else
        {
            sub_66ed20(pBase, 0, 1);
            return 0;
        }
    }

    if (bCaptured != 0)
    {
        dx = pt2.x - pt.x;
        dy = 0;
    }
    else
    {
        dx = 0;
        dy = pt2.y - pt.y;
    }

    GetCapture();
    sub_6301c0((void*)GetCapture());
    if (sub_6301c0((void*)GetCapture()) != this)
        return 0;

    for (;;)
    {
        if (PeekMessageA(&msg, 0, 0xf, 0xf, 0) == 0)
            break;

        while (PeekMessageA(&msg, 0, 0xf, 0xf, 0) != 0)
        {
            if (GetMessageA(&msg, 0, 0, 0) == 0)
                return 0;

            DispatchMessageA(&msg);

            if (PeekMessageA(&msg, 0, 0xf, 0xf, 0) == 0)
                break;
        }

        if (GetMessageA(&msg, 0, 0, 0) == 0)
            return 0;

        if (msg.message == 0x200)
        {
            pt.x = (short)(msg.lParam & 0xffff);
            pt.y = (short)((msg.lParam >> 16) & 0xffff);

            ClientToScreen(this->m_pWnd, &pt);

            pt.x += dx;
            pt.y += dy;

            if (pt.x < rc.left)
                tmp = pt.x;
            else
                tmp = rc.left;

            if (tmp > rc.right)
            {
                if (pt.x < rc.left)
                    pt.x = pt.x;
                else
                    pt.x = rc.left;
            }
            else
            {
                pt.x = rc.right;
            }

            if (pt.y < rc.top)
                tmp = pt.y;
            else
                tmp = rc.top;

            if (tmp > rc.bottom)
            {
                if (pt.y < rc.top)
                    pt.y = pt.y;
                else
                    pt.y = rc.top;
            }
            else
            {
                pt.y = rc.bottom;
            }

            if (bCaptured != 0)
            {
                if (pt2.x == pt.x)
                    goto done;

                OffsetRect(&rc2, pt.x - pt2.x, 0);
            }
            else
            {
                if (pt2.y == pt.y)
                    goto done;

                OffsetRect(&rc2, 0, pt.y - pt2.y);
            }

            sub_6e3970(this, &rc, &rc2);

            if (this->m_pPane != 0)
            {
                sub_66ed20(pBase, (char*)this->m_pPane + 0x20, 0);
            }
            else
            {
                sub_66ed20(pBase, 0, 0);
            }

        done:
            if (sub_6301c0((void*)GetCapture()) != this)
                break;
        }
        else if (msg.message == 0x100)
        {
            if (msg.wParam == 0x1b)
                return 0;
        }
        else if (msg.message == 0x202)
        {
            return 0;
        }
        else
        {
            DispatchMessageA(&msg);
        }

        if (sub_6301c0((void*)GetCapture()) != this)
            break;
    }

    if (sub_6301c0((void*)GetCapture()) == this)
        ReleaseCapture();

    return 0;
}
