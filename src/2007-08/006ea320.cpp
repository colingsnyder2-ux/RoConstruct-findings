// from server: 46% by colin
struct CXTPDockingPaneOffice2003Theme {
    void Draw(int hdc, int x, int y, int cx, int cy, int bSelected, int bVertical);
};

extern "C" {
    int __stdcall sub_6e54b0(int);
    void __stdcall sub_7383ca(int, int, int, int, int, int);
    int __stdcall sub_6ea1d0(int);
    void __stdcall sub_6ea200(int, int, int, int, int);
    void __stdcall sub_6e8600(int, int, int, int, int, int, int);
}

void CXTPDockingPaneOffice2003Theme::Draw(int hdc, int x, int y, int cx, int cy, int bSelected, int bVertical)
{
    int left;
    int *pRect;
    int i, j;

    if (bVertical) {
        pRect = (int *)((char *)this + 0x230);
    } else {
        pRect = (int *)((char *)this + 0x224);
    }

    if (pRect[2] != -1) {
        left = pRect[1];
    } else {
        left = pRect[2];
    }

    if (bVertical) {
        cy -= 4;
    } else {
        cx -= 4;
    }

    ((void (__stdcall *)(int, int, int, int, int, int, int))((*(int **)this)[0x60 / 4]))(
        left, 0x10, 0, bVertical, (int)&left, *(int *)((char *)this + 0x2c), hdc);

    if (!bVertical) {
        if (*(int *)((char *)this + 0x23c) != 0) {
            if (cy > y + 7) {
                int h = cy - y - 3;
                if (h > 5) {
                    for (i = 5; i < h; i += 4) {
                        sub_7383ca(hdc, x + 6, i + 1, 2, 2, sub_6e54b0(5));
                        sub_7383ca(hdc, x + 5, i, 2, 2, sub_6e54b0(0x26));
                    }
                }
                y += 8;
            }
        }
    } else {
        if (*(int *)((char *)this + 0x23c) != 0) {
            if (cx > x + 7) {
                int w = cx - x - 5;
                if (w > 3) {
                    for (j = 4; j < w; j += 4) {
                        sub_7383ca(hdc, j + 1, y + 6, 2, 2, sub_6e54b0(5));
                        sub_7383ca(hdc, j, y + 5, 2, 2, sub_6e54b0(0x26));
                    }
                }
                x += 8;
            }
        }
    }

    if (sub_6ea1d0((int)this)) {
        int color = left;
        ((void (__stdcall *)(int))((*(int **)hdc)[0x38 / 4]))(color);
    } else {
        int color = sub_6e54b0(0x11);
        ((void (__stdcall *)(int))((*(int **)hdc)[0x38 / 4]))(color);
    }

    if (bVertical) {
        x += 1;
        y += 6;
        cx -= 2;
    } else {
        x += 6;
        y += 1;
        cy -= 2;
    }

    sub_6ea200((int)this, hdc, x, y, bVertical);

    sub_6e8600((int)this, hdc, x, y, cx, cy, bVertical);
}
