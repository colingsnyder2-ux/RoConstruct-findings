// from server: 37% by tester
struct CXTSplitterWnd {
    char pad[0x20];
    void* m_hWnd;
    char pad2[0x104 - 0x24];
    int m_bSomething;
    unsigned char m_flags;
    void OnDrawSplitter(void* pDC, int nType, void* pRect);
    void* sub_708260();
};


extern "C" void __stdcall sub_6a1358(void* p, void* a, void* b, void* c);
extern "C" void __stdcall sub_6a135e(void* p, void* a, void* b);
extern "C" void* __stdcall sub_6dfd40();
extern "C" void* __stdcall sub_6df520(void* p, int n);
extern "C" int __stdcall InflateRect(void* pRect, int dx, int dy);
extern "C" int __stdcall RedrawWindow(void* hWnd, void* pRect, void* hRgn, unsigned int flags);

void CXTSplitterWnd::OnDrawSplitter(void* pDC, int nType, void* pRect)
{
    int x1, y1, x2, y2;
    void* p1;
    void* p2;
    int* pr;
    int a, b, c, d;

    p1 = sub_708260();
    x1 = *(int*)((char*)p1 + 0x14);
    p2 = sub_708260();
    y1 = *(int*)((char*)p2 + 0x18);

    if (pDC == 0) {
        InflateRect(pRect, 0, 0x41);
        return;
    }

    pr = (int*)pRect;
    a = pr[0];
    b = pr[1];
    c = pr[2];
    d = pr[3];

    if (nType == 0) {
        if (m_bSomething != 0) {
            sub_6a1358(pDC, &a, &x1, &x1);
            RedrawWindow(0, 0, 0, 0);
            p2 = sub_6dfd40();
            p2 = sub_6df520(p2, 0x14);
            sub_6a1358(pDC, &a, p2, &y1);
            RedrawWindow(0, 0, 0, 0);
        } else {
            p2 = sub_6dfd40();
            p2 = sub_6df520(p2, 6);
            sub_6a1358(pDC, &a, p2, &x1);
            RedrawWindow(0, 0, 0, 0);
            p2 = sub_6dfd40();
            p2 = sub_6df520(p2, 0x14);
            sub_6a1358(pDC, &a, p2, &y1);
            RedrawWindow(0, 0, 0, 0);
        }
    } else if (nType == 3) {
        if (m_bSomething != 0) {
            if ((m_flags & 4) != 0) {
                sub_6a1358(pDC, &a, &x1, &x1);
                RedrawWindow(0, 0, 0, 0);
                sub_6a1358(pDC, &a, &x1, &x1);
            } else {
                sub_6a1358(pDC, &a, &x1, &x1);
                RedrawWindow(0, 0, 0, 0);
                p2 = sub_6dfd40();
                p2 = sub_6df520(p2, 0x14);
                sub_6a1358(pDC, &a, p2, &y1);
            }
        } else {
            p2 = sub_6dfd40();
            p2 = sub_6df520(p2, 0x14);
            sub_6a1358(pDC, &a, p2, &y1);
            RedrawWindow(0, 0, 0, 0);
            p2 = sub_6dfd40();
            p2 = sub_6df520(p2, 6);
            sub_6a1358(pDC, &a, p2, &x1);
        }
    } else {
        sub_6a135e(pDC, &a, &x1);
    }
}
