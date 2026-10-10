// from server: 55% by colin
struct CXTPStatusBar {
    char pad[0x9c];
    int m_nCount;
    void DrawPane(int);
    void GetRect(int, int, int*);

    void DrawAllPanes();
};

extern "C" int __stdcall GetSystemMetrics(int);
extern "C" int __stdcall IsWindow(void*);
extern "C" int __stdcall InflateRect(void*, int, int);
extern "C" int __stdcall MoveWindow(void*, int, int, int, int, int);

struct CXTPStatusBarPane {
    char pad0[0x28];
    int m_dwStyle;
    char pad1[0x18];
    void* m_hWnd;
};

void CXTPStatusBar::DrawPane(int) {}

void CXTPStatusBar::GetRect(int, int, int*) {}

void CXTPStatusBar::DrawAllPanes()
{
    int rect[4];
    int nHeight = GetSystemMetrics(0x2d);
    int i;
    for (i = 0; i < m_nCount; i++)
    {
        CXTPStatusBarPane* pPane = (CXTPStatusBarPane*)0;
        void* hWnd = pPane->m_hWnd;
        if (hWnd != 0 && IsWindow(hWnd))
        {
            int style = pPane->m_dwStyle;
            GetRect(i, 0, rect);
            if ((style & 0x100) == 0)
            {
                int w = -rect[0];
                InflateRect(rect, w, w);
            }
            int x1 = rect[0];
            int y1 = rect[1];
            int x2 = rect[2];
            int y2 = rect[3];
            MoveWindow(hWnd, x1, y1, x2 - x1, y2 - y1, 1);
        }
    }
}
