// from server: 88% by colin
struct CRobloxDHtmlDialog {
    char pad[0x114];
    void* field_114;
    char pad2[0x10];
    void* field_128;
    int sub_44cd50();
};

extern "C" void* __stdcall sub_77e6a8(void*, int, int, int, int, int);
extern "C" void __stdcall sub_6308da();
extern "C" void __stdcall sub_6308d4(void*, void*);

int CRobloxDHtmlDialog::sub_44cd50() {
    sub_6308da();
    if (field_128 != 0) {
        void* p = sub_77e6a8(&field_114, 0, 0, 0, 0, 0);
        sub_6308d4(this, p);
        return 0;
    }
    return 1;
}
