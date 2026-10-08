// from server: 70% by colin
// roc 2007-08 0044cfd0  unit: CRobloxDHtmlDialog  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044cfd0

struct CRobloxDHtmlDialog {
    char pad[0xe8];
    void* field_e8;
    void* sub_44cfd0(void* arg);
};

extern "C" void* __stdcall sub_77e69c(void*, const void*);

void* CRobloxDHtmlDialog::sub_44cfd0(void* arg) {
    void* tmp = 0;
    sub_77e69c(&field_e8, arg);
    return arg;
}
