// from server: 30% by atomic.potato
struct CXTPBitmapDC {
    int m_nType;
    char pad1[4];
    int m_rect[4];
    int m_hDC;
    char pad2[0x20 - 0x1c];
    int m_hWnd;
    int Init(int hWnd, int x, int y, int cx, int cy, int a6, int a7, int a8, int a9);
};

extern "C" int __stdcall GetDCEx(int, int, int);
extern "C" int __stdcall GetDesktopWindow();
extern "C" int __stdcall GetCapture();
extern "C" int __stdcall SetCapture(int);
extern "C" int __stdcall ReleaseCapture();
extern "C" int __stdcall ClientToScreen(int, int*);
extern "C" int __stdcall IsRectEmpty(int*);
extern "C" int __stdcall OffsetRect(int*, int, int);
extern "C" int __stdcall LockWindowUpdate(int);
extern "C" int __stdcall ReleaseDC(int, int);
extern "C" int __stdcall GetMessageA(int*, int, int, int);
extern "C" int __stdcall DispatchMessageA(int*);

extern "C" int __stdcall sub_718D02(int);
extern "C" int __stdcall sub_84BF0C(int);
extern "C" int __stdcall sub_770C20(int, int, int, int);

int CXTPBitmapDC::Init(int hWnd, int x, int y, int cx, int cy, int a6, int a7, int a8, int a9)
{
    int dc;
    int desktop;
    int cap;
    int rect[4];
    int pt[2];
    int msg[8];
    int flag;

    m_nType = 0;
    dc = sub_718D02(GetDCEx(hWnd, 0, 0));
    desktop = sub_718D02(GetDesktopWindow());
    if (GetCapture() != 0)
        dc = sub_84BF0C(GetDCEx(desktop, 0, 0x403));
    else
        dc = sub_84BF0C(GetDCEx(desktop, 0, 3));
    m_nType = dc;

    if (a9 != 0) {
        rect[0] = x - a7;
        rect[1] = 0;
    } else {
        rect[0] = 0;
        rect[1] = y - a8;
    }

    sub_770C20(rect[0], rect[1], cx, cy);

    if (IsRectEmpty(m_rect) == 0) {
        sub_770C20(m_rect[0], m_rect[1], m_rect[2], m_rect[3]);
    }

    flag = 0;
    while (sub_718D02(GetCapture()) == hWnd) {
        if (GetMessageA(msg, 0, 0, 0) == 0)
            break;
        if (msg[0] == 0x200) {
            pt[0] = (short)msg[2];
            pt[1] = (short)(msg[2] >> 16);
            ClientToScreen(hWnd, pt);
            pt[0] += rect[0];
            pt[1] += rect[1];
            if (pt[0] >= cx) pt[0] = cx;
            if (pt[0] <= 0) pt[0] = 0;
            if (pt[1] >= cy) pt[1] = cy;
            if (pt[1] <= 0) pt[1] = 0;
            if (a9 != 0) {
                if (m_rect[0] != pt[0]) {
                    sub_770C20(m_rect[0], m_rect[1], m_rect[2], m_rect[3]);
                    OffsetRect(m_rect, pt[0] - m_rect[0], 0);
                }
            } else {
                if (m_rect[1] != pt[1]) {
                    sub_770C20(m_rect[0], m_rect[1], m_rect[2], m_rect[3]);
                    OffsetRect(m_rect, 0, pt[1] - m_rect[1]);
                }
            }
        } else if (msg[0] == 0x100) {
            if (msg[1] == 0x1b)
                break;
        } else if (msg[0] == 0x202) {
            flag = 1;
        }
        DispatchMessageA(msg);
        if (sub_718D02(GetCapture()) != hWnd)
            break;
    }

    if (IsRectEmpty(m_rect) == 0) {
        sub_770C20(m_rect[0], m_rect[1], m_rect[2], m_rect[3]);
    }
    sub_770C20(rect[0], rect[1], cx, cy);

    if (sub_718D02(GetCapture()) == hWnd)
        ReleaseCapture();

    desktop = sub_718D02(GetDesktopWindow());
    SetCapture(0);
    if (m_nType != 0) {
        ReleaseDC(desktop, m_nType);
        m_nType = 0;
    }
    return flag;
}
