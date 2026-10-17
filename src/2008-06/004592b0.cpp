// from server: 56% by colin
struct CRobloxView {
    char pad0[0x20];
    void* field_20;
    char pad1[0x90];
    char field_b0[0x20];
    char pad2[0xd0];
    void* field_1a0;
    char pad3[0x38];
    void* field_1d8;
    void sub_6a0a4c(int, int, int, int, int);
    void func_004592b0();
};

extern "C" int __stdcall GetClientRect(void*, void*);

void CRobloxView::func_004592b0()
{
    int rect[4];
    GetClientRect(field_20, rect);

    int width = rect[2] - rect[0];
    int height = rect[3] - rect[1];

    int w = width;
    int h = height;

    if (field_1d8 != 0 && *(int*)((char*)field_1d8 + 0x20) != 0) {
        h = height - 0xe1;
    }

    if (field_1a0 != 0) {
        w = width - 0x14;
    }

    int a = (w < 0) ? 0 : w;
    int b = (h < 0) ? 0 : h;

    if (*(int*)((char*)this + 0xd0) != 0) {
        ((CRobloxView*)((char*)this + 0xb0))->sub_6a0a4c(0, 0, b, a, 1);
    }

    if (field_1d8 != 0 && *(int*)((char*)field_1d8 + 0x20) != 0) {
        sub_6a0a4c(0, 0xe1, b, height, 1);
    }

    if (field_1a0 != 0) {
        ((CRobloxView*)((char*)this + 0x180))->sub_6a0a4c(0, a, b, 0x14, 1);
    }
}
