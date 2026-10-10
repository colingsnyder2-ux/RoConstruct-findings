// from server: 62% by colin
struct CXTPNewToolbarDlg {
    char pad[0x20];
    int field_0x20;
    int field_0x24;
    int field_0x28;
    void sub_6d26b0(int, int);
    void func(int);
};

extern "C" void __cdecl sub_62ff20();

void CXTPNewToolbarDlg::func(int a) {
    int i = 0;
    if (field_0x28 > 0) {
        int* arr = &field_0x24;
        for (; i < field_0x28; i++) {
            if (i < 0 || i >= arr[1]) {
                sub_62ff20();
            }
            if (a == arr[i]) {
                sub_6d26b0(i, 1);
            }
        }
    }
}
