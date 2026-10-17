// from server: 61% by colin
struct CRobloxView {
    char pad0[0x20];
    void* field_20;
    char pad24[0xb0 - 0x24];
    char field_b0[0x20];
    char pad_d0[0x180 - 0xd0];
    char field_180[0x20];
    int field_1a0;
    char pad_1a4[0x1d8 - 0x1a4];
    void* field_1d8;

    void sub_4592B0();
};

struct Rect {
    int left;
    int top;
    int right;
    int bottom;
};

extern "C" int __stdcall GetClientRect(void*, Rect*);

struct S_func_006a0a4c {
    void f(int, int, int, int, int);
};

void CRobloxView::sub_4592B0()
{
    Rect rc;
    GetClientRect(field_20, &rc);

    int w = rc.right - rc.left;
    int h = rc.bottom - rc.top;

    int x = w;
    int y = h;

    if (field_1d8 != 0 && *(int*)((char*)field_1d8 + 0x20) != 0)
        y = h - 0xe1;

    if (field_1a0 != 0)
        x = w - 0x14;

    int a = (x < 0) ? 0 : x;
    int b = (y < 0) ? 0 : y;

    if (*(int*)((char*)this + 0xd0) != 0)
        ((S_func_006a0a4c*)(field_b0))->f(0, b, a, 1, 0);

    if (field_1d8 != 0 && *(int*)((char*)field_1d8 + 0x20) != 0)
        ((S_func_006a0a4c*)field_1d8)->f(a, 0xe1, h, 1, 0);

    if (field_1a0 != 0)
        ((S_func_006a0a4c*)(field_180))->f(0, b, a, 0x14, 1);
}
