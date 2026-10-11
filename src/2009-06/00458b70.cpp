// from server: 37% by atomic.potato
struct VCRobloxView_VerbBinder {
    char pad0[0x58];
    int field58;
    void sub_5ea2e0();
    void sub_71940a();
    void sub_718a32();
    void destroy(char flag);
};

void VCRobloxView_VerbBinder::destroy(char flag) {
    sub_5ea2e0();
    sub_71940a();
    if (flag & 1) {
        sub_718a32();
    }
}
