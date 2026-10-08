// from server: 80% by colin
// roc 2007-08 004561b0  unit: CRobloxView  size: 45 bytes

struct CRobloxView {
    char pad[0x88];
    void sub_630004();
    void sub_630922(int);
    void sub_62ff50(int);
    void sub_63091c();
    void func(int);
};

void CRobloxView::func(int a) {
    sub_630922(a);
    sub_62ff50(0);
    sub_63091c();
    sub_630004();
}
