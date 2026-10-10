// from server: 93% by why2
struct CXTPToolTipContextToolTip {
    char pad[0x128];
    int field_128;
    int sub_784c50(int, int);
};

extern "C" int (__stdcall *g_fn)(void*, int);

int CXTPToolTipContextToolTip::sub_784c50(int a, int b) {
    g_fn(&field_128, b);
    return 0;
}
