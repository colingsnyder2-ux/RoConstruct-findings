// from server: 43% by colin
struct CXTSplitterWnd {
    char pad0[0x20];
    void* m_hwnd;
    char pad1[0x104 - 0x24];
    int m_bSplit;
    unsigned char m_flags;
    char pad2[0x108 - 0x105];
    int f(void* p1, int nCode, void* p3);
};

extern "C" {
    int __stdcall InflateRect(void* rect, int dx, int dy);
    int __stdcall RedrawWindow(void* hwnd, void* rect, void* rgn, unsigned int flags);
    void* __cdecl sub_668F70();
    void* __stdcall sub_668770(void* p, int n);
    void __stdcall sub_6308AA(void* p, void* a, void* b);
    void __stdcall sub_6308B0(void* p, void* a, void* b);
    void* __stdcall sub_690280();
}

int CXTSplitterWnd::f(void* p1, int nCode, void* p3)
{
    void* v1;
    void* v2;
    int edi;
    int ebx;
    int rect[4];
    int* pr;

    v1 = sub_690280();
    edi = *(int*)((char*)v1 + 0x14);
    v2 = sub_690280();
    ebx = *(int*)((char*)v2 + 0x18);

    if (p1 == 0) {
        RedrawWindow(m_hwnd, 0, p3, 0x41);
        return 0;
    }

    pr = (int*)p3;
    rect[0] = pr[0];
    rect[1] = pr[1];
    rect[2] = pr[2];
    rect[3] = pr[3];

    if (nCode == 0) {
        if (m_bSplit != 0) {
            sub_6308AA(p1, rect, (void*)edi);
            InflateRect(rect, -1, -1);
            sub_6308AA(p1, rect, sub_668770(sub_668F70(), 0x14));
            InflateRect(rect, -1, -1);
        } else {
            sub_6308AA(p1, rect, sub_668770(sub_668F70(), 6));
            InflateRect(rect, -1, -1);
            sub_6308AA(p1, rect, sub_668770(sub_668F70(), 0x14));
            InflateRect(rect, -1, -1);
        }
    } else if (nCode == 3) {
        if (m_bSplit != 0) {
            if ((m_flags & 4) != 0) {
                sub_6308AA(p1, rect, (void*)edi);
                InflateRect(rect, -1, -1);
                sub_6308AA(p1, rect, (void*)edi);
            } else {
                sub_6308AA(p1, rect, (void*)edi);
                InflateRect(rect, -1, -1);
                sub_6308AA(p1, rect, sub_668770(sub_668F70(), 0x14));
            }
        } else {
            sub_6308AA(p1, rect, sub_668770(sub_668F70(), 0x14));
            InflateRect(rect, -1, -1);
            sub_6308AA(p1, rect, sub_668770(sub_668F70(), 6));
        }
    }

    sub_6308B0(p1, rect, (void*)edi);
    return 0;
}
