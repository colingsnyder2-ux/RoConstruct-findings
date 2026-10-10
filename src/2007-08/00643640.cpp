// from server: 94% by colin
struct CXTPCommandBar {
    char pad[0xf8];
    void* field_f8;
    void SetCommandBar(void* p);
};

extern "C" void __fastcall sub_6301E4(void* p);
extern "C" void __stdcall sub_67A640(void* p);

void CXTPCommandBar::SetCommandBar(void* p) {
    if (field_f8 != 0) {
        sub_6301E4(field_f8);
        field_f8 = 0;
    }
    field_f8 = p;
    if (p != 0) {
        sub_67A640(this);
    }
}
