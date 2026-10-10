// from server: 62% by colin
struct CList {
    void* vtable;
    void (__stdcall *release)(int);
};

struct CXTShadowWnd {
    char pad[0x20];
    int field20;
    char pad2[0x34];
    int field58;
    char pad3[0xc];
    int field68;
    char pad4[0x10];
    int field7c;
    int field80;
    void func(CList* param);
};

extern "C" void __stdcall sub_62ff4a();
extern "C" void __stdcall sub_6e4770();
extern "C" void __stdcall sub_712bb0();

void CXTShadowWnd::func(CList* param)
{
    CList* p80 = (CList*)field80;
    if (p80 == 0) {
        p80->release(1);
        field80 = 0;
    }
    CList* p7c = (CList*)field7c;
    if (p7c != 0) {
        p7c->release(1);
        field7c = 0;
    }
    field58 = 0;
    field68 = 0;
    if (field20 != 0) {
        sub_62ff4a();
    }
    sub_712bb0();
    sub_6e4770();
}
