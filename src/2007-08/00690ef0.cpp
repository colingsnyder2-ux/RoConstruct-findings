// from server: 28% by colin
struct CXTSplitterWnd {
    char pad[0xfc];
    int field_fc;
    char pad2[0x108 - 0x100];
    unsigned char field_108;
    void DrawSplitter(int, int);
};

extern "C" {
    int __stdcall PatBlt(void*, int, int, int, int, unsigned long);
    int __stdcall CopyRect(void*, const void*);
    int __stdcall DrawFocusRect(void*, const void*);
}

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

struct CPoint {
    int x;
    int y;
};

void CXTSplitterWnd::DrawSplitter(int a, int b)
{
    if (field_fc != 0)
        return;

    CRect r1;
    CPoint pt;
    CRect r2;

    if (field_108 & 1) {
        CRect r3;
        r3.left = 0;
        r3.top = 0;
        r3.right = 0;
        r3.bottom = 0;
        r1 = r3;
        pt.x = 0;
        pt.y = 0;
        r2 = r3;
    } else {
        r1.left = 0;
        r1.top = 0;
        r1.right = 0;
        r1.bottom = 0;
        pt.x = 0;
        pt.y = 0;
        r2 = r1;
    }

    if (field_108 & 1) {
        int w = r2.right - r2.left;
        int h = r2.bottom - r2.top;
        if (w < h) {
            pt.x = r2.right;
            CopyRect(&r1, &r2);
        } else {
            pt.y = r2.top;
            CopyRect(&r1, &r2);
        }
    } else {
        int w = r2.right - r2.left;
        int h = r2.bottom - r2.top;
        if (h > w) {
            if (w != 4) {
                r2.right -= 4;
            }
        } else {
            if (h != 4) {
                r2.top += 4;
            }
        }
        PatBlt(0, r2.left, r2.top, r2.right - r2.left, r2.bottom - r2.top, 0x5a0049);
    }

    DrawFocusRect(0, &r1);
}
