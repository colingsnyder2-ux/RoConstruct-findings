// from server: 78% by colin
struct CXTPControlComboBoxGalleryPopupBar {
    char pad[0xf8];
    int field_f8;
    char pad2[0x180 - 0xf8 - 4];
    void* field_180;
    int sub_6b3960();
    int sub_67a9a0(int, int);
    int sub_644490(int, int, int);
    int func(int, int, int);
};

int CXTPControlComboBoxGalleryPopupBar::func(int a, int b, int c) {
    int v = sub_67a9a0(b, c);
    if (v == sub_6b3960()) {
        void* p = field_180;
        (*(void (__thiscall**)(void*, int))(*(int*)p + 0x15c))(p, 0);
        (*(void (__thiscall**)(void*, int))(*(int*)p + 0x98))(p, 0);
        return 0;
    }
    return sub_644490(a, b, c);
}
