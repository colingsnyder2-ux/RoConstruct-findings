// from server: 90% by colin
struct CWrapperView {
    char pad[0x58];
    struct VTable {
        char pad[0x14];
        int (__stdcall *func)(int, int, int, int);
    } *vt;
    int method(int a, int b, int c, int d);
};

extern "C" int __stdcall sub_63003a(int, int, int, int);

int CWrapperView::method(int a, int b, int c, int d) {
    if (sub_63003a(a, b, c, d))
        return 1;
    return vt->func(a, b, c, d);
}
