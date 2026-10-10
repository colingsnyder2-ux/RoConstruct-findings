// from server: 87% by atomic.potato
extern "C" void sub_00A99B30(void*, int, int, int);
extern "C" int __stdcall InvalidateRect(void*, const void*, int);

struct CXTSplitterWnd {
    void f(int, int, int);
    char pad[0x20];
    void* field20;
};

void CXTSplitterWnd::f(int a, int b, int c) {
    sub_00A99B30(this, a, b, c);
    InvalidateRect(field20, 0, 1);
}
