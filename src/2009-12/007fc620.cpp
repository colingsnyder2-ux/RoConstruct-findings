// from server: 23% by atomic.potato
struct CPatchedControlComboBox {
    char pad0[0x9c];
    int field_9c;
    char pad1[0x15c - 0xa0];
    void* field_15c;
    char pad2[0x184 - 0x160];
    void* field_184;
    void OnEvent(int);
};

extern "C" void __stdcall sub_7fa7b0();
extern "C" void __stdcall sub_7f65b0();
extern "C" void __stdcall sub_7f3ede();
extern "C" void __stdcall sub_7fb420();
extern "C" void __stdcall sub_7fa300();
extern "C" void __stdcall sub_7f9390();
extern "C" void __stdcall sub_7fa360();

extern "C" int (__stdcall *off_98ddbc)();
extern "C" void (__stdcall *off_98dec0)();

void CPatchedControlComboBox::OnEvent(int code)
{
    if (code == 2) {
        sub_7fa7b0();
        return;
    }
    if (code == 0) {
        if (field_184 != 0 && *(int*)((char*)field_184 + 0x20) != 0) {
            int v;
            if (field_9c == -1) {
                v = 0;
                if (field_15c != 0) {
                    sub_7f65b0();
                    v = 0;
                }
            } else {
                v = field_9c;
            }
            sub_7f3ede();
            sub_7fb420();
        }
        return;
    }
    if (code == 4) {
        char buf1[4];
        char buf2[4];
        sub_7fa300();
        int r1 = off_98ddbc();
        if (r1) {
            sub_7f9390();
            int r2 = off_98ddbc();
            if (r2) {
                buf1[0] = 1;
            } else {
                buf1[0] = 0;
            }
        } else {
            buf1[0] = 0;
        }
        off_98dec0();
        off_98dec0();
        if (buf1[0] != 0) {
            sub_7f9390();
            sub_7fa360();
            off_98dec0();
        }
    }
}
