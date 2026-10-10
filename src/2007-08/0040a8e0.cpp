// from server: 62% by colin
extern "C" {
    int __stdcall sub_63002e(int, int, int, int, int, int);
    int __stdcall sub_630034(int, int, int, int, int, int);
    int __stdcall InvalidateRect(void*, const void*, int);
}

struct CBrowserView {
    char pad0[0x98];
    char field98[0x70];
    char pad108[0x20];
    void* field128;
    char pad12c[0x1c];
    char field148[0x20];

    void func(int a, int b, int c);
};

void CBrowserView::func(int a, int b, int c)
{
    char* p = (char*)this + 0x108;
    int saved = 0;
    if (p == 0 && *(int*)(p + 0x20) != 0) {
        int* vtable = *(int**)p;
        int (*fn)(void*, int*, int, int, int) = *(int (**)(void*, int*, int, int, int))(vtable + 0x1ec);
        int tmp[2];
        fn(p, tmp, a, 0xcb, 0);
        saved = tmp[1];
        sub_630034((int)p, 0, 0, a, saved, 1);
        InvalidateRect(*(void**)((char*)this + 0x128), 0, 0);
    }
    char* q = (char*)this + 0x98;
    if (q != 0 && *(int*)(q + 0x20) != 0) {
        int diff = c - saved;
        sub_63002e((int)q, 0, 0, saved, a, diff);
    }
}
