// from server: 46% by tester
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
struct HDC__; typedef struct HDC__ *HDC;
struct CXTTreeBase {
    int Get(int index);
};

struct CXTSplitterWnd {
    char pad[0x20];
    void* field20;
    char pad2[0x104 - 0x24];
    int field104;
    unsigned char field108;
    void OnDraw(HDC hdc, int a2, int a3, int a4);
};

extern "C" {
    int __stdcall InflateRect(void* rect, int dx, int dy);
    int __stdcall RedrawWindow(void* hwnd, void* rect, void* rgn, unsigned int flags);
}

void CXTSplitterWnd::OnDraw(HDC hdc, int a2, int a3, int a4)
{
    int v1 = ((CXTTreeBase*)this)->Get(0);
    int v2 = ((CXTTreeBase*)this)->Get(0);
    int ebx = *(int*)((char*)v2 + 0x18);
    int edi = *(int*)((char*)v1 + 0x14);

    if (a2 == 0) {
        RedrawWindow(field20, 0, (void*)a4, 0x41);
        return;
    }

    int r[4];
    r[0] = *(int*)((char*)a4 + 0);
    r[1] = *(int*)((char*)a4 + 4);
    r[2] = *(int*)((char*)a4 + 8);
    r[3] = *(int*)((char*)a4 + 12);

    if (a3 == 0) {
        if (field104 != 0) {
            ((CXTTreeBase*)a2)->Get(0);
            InflateRect(r, -1, -1);
            int v = ((CXTTreeBase*)a2)->Get(0x14);
            ((CXTTreeBase*)a2)->Get(0x14);
            ((CXTTreeBase*)a2)->Get(0);
            InflateRect(r, -1, -1);
        } else {
            int v = ((CXTTreeBase*)a2)->Get(6);
            ((CXTTreeBase*)a2)->Get(6);
            ((CXTTreeBase*)a2)->Get(0);
            InflateRect(r, -1, -1);
            int v2 = ((CXTTreeBase*)a2)->Get(0x14);
            ((CXTTreeBase*)a2)->Get(0x14);
            ((CXTTreeBase*)a2)->Get(0);
            InflateRect(r, -1, -1);
        }
    } else if (a3 == 3) {
        if (field104 != 0) {
            if (field108 & 4) {
                ((CXTTreeBase*)a2)->Get(0);
                InflateRect(r, -1, -1);
                ((CXTTreeBase*)a2)->Get(0);
                ((CXTTreeBase*)a2)->Get(0);
                ((CXTTreeBase*)a2)->Get(0);
            } else {
                ((CXTTreeBase*)a2)->Get(0);
                InflateRect(r, -1, -1);
                int v = ((CXTTreeBase*)a2)->Get(0x14);
                ((CXTTreeBase*)a2)->Get(0x14);
                ((CXTTreeBase*)a2)->Get(0);
            }
        } else {
            int v = ((CXTTreeBase*)a2)->Get(0x14);
            ((CXTTreeBase*)a2)->Get(0x14);
            ((CXTTreeBase*)a2)->Get(0);
            InflateRect(r, -1, -1);
            int v2 = ((CXTTreeBase*)a2)->Get(6);
            ((CXTTreeBase*)a2)->Get(6);
            ((CXTTreeBase*)a2)->Get(0);
        }
    } else {
        ((CXTTreeBase*)a2)->Get(0);
        ((CXTTreeBase*)a2)->Get(0);
    }
}
