// from server: 39% by colin




extern "C" int __stdcall GetDeviceCaps(void* hdc, int index);
extern "C" int __stdcall MulDiv(int a, int b, int c);

struct ScintillaRect {
    int left;
    int top;
    int right;
    int bottom;
};

struct ScintillaCtrl {
    char pad[0x54];
    int field_54;
    int field_58;
    void Method(int a, int b, int c, int d);
};

struct ScintillaView {
    void* vtable;
    char pad[0x54];
    int field_58;
    char pad2[0x6c];
    int field_c8;
    int field_cc;
    int field_d0;
    int field_d4;
    char pad3[8];
    int field_e0;
    int field_e4;
    int field_e8;

    void Method(int a, int b, int c, int d);
};

void ScintillaView::Method(int a, int b, int c, int d)
{
    ScintillaRect rc;
    int x;
    int y;
    int cx;
    int cy;

    rc.left = 0;
    rc.top = 0;
    rc.right = 0;
    rc.bottom = 0;

    if (field_c8 == 0 && field_d0 == 0 && field_cc == 0 && field_d4 == 0) {
        x = field_c8;
        y = field_cc;
        cx = field_d0;
        cy = field_d4;
    } else {
        int caps = GetDeviceCaps((void*)a, 0x58);
        int caps2 = GetDeviceCaps((void*)a, 0x5a);
        int scale = field_e8 ? 0x3e8 : 0x9ec;
        x = MulDiv(field_c8, caps, scale);
        y = MulDiv(field_cc, caps, scale);
        cx = MulDiv(field_d0, caps2, scale);
        cy = MulDiv(field_d4, caps2, scale);
    }

    rc.left = b + x;
    rc.top = c + y;
    rc.right = d - 1 - cx;
    rc.bottom = a - 1 - cy;

    if (field_e0 != 0) {
        void** vt = *(void***)this;
        void (*fn)(ScintillaView*, int, int, ScintillaRect*) = (void (*)(ScintillaView*, int, int, ScintillaRect*))vt[0x19c / 4];
        fn(this, b, c, &rc);
    }

    if (field_e4 != 0) {
        void** vt = *(void***)this;
        void (*fn)(ScintillaView*, int, int, ScintillaRect*) = (void (*)(ScintillaView*, int, int, ScintillaRect*))vt[0x1a0 / 4];
        fn(this, b, c, &rc);
    }

    ((ScintillaCtrl*)((char*)this + 0x58))->Method(1, (int)&rc, 1, 0);
}
