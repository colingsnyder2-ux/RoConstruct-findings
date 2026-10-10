// from server: 47% by colin
struct CXTPReportInplaceControl {
    void OnDraw(void* hdc, int x, int y);
};

extern "C" {
    __declspec(dllimport) int __stdcall OffsetRect(void*, int, int);
    void __stdcall sub_680000(void*, int);
    void __stdcall sub_6309ee(void*, int, int, void*, int, int);
    void __stdcall sub_63002e(void*, int, int, int, int, int, int);
}

void CXTPReportInplaceControl::OnDraw(void* hdc, int x, int y)
{
    int rect[4];
    int v1, v2;
    int dx, dy;

    *(int*)((char*)this + 0x88) = 0;
    *(int*)((char*)this + 0x84) = 0;

    (*(void(__stdcall**)(void*, void*))(*(int*)((char*)this + 0x54) + 4))((void*)((char*)this + 0x54), hdc);

    v1 = *(int*)((char*)this + 0x7c);
    v2 = *(int*)((char*)this + 0x80);

    rect[0] = x;
    rect[1] = y;
    rect[2] = x + v1 - 1;
    rect[3] = y + v2 - 1;

    if (*(int*)(*(int*)((char*)this + 0x58) + 0xb0) != 0) {
        if (*(int*)(*(int*)(*(int*)((char*)this + 0x58) + 0xb0) + 0x284) != 0) {
            rect[3] = y + v2 - 1 + v2;
        }
    }

    sub_680000(rect, *(int*)((char*)hdc + 4));

    dx = rect[0];
    dy = rect[1];
    if (dx > rect[2]) {
        dx = rect[2];
    }
    if (dy > rect[3]) {
        dy = rect[3];
    }

    OffsetRect(rect, -dx, -dy);

    if (*(int*)((char*)this + 0x20) == 0) {
        sub_6309ee(this, 0, 0x40000100, rect, *(int*)((char*)hdc + 4), 0xffff);
    }

    sub_63002e(this, 0, rect[0], rect[1], rect[2] - rect[0], rect[3] - rect[1], 0x44);

    *(int*)((char*)hdc + 0x1c) -= dy;
    *(int*)((char*)hdc + 8) += *(int*)((char*)this + 0x7c);
}
