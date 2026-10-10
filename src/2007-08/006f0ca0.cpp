// from server: 66% by colin
extern "C" int __stdcall sub_6f0c90();

extern "C" void __stdcall SetCursor(void*);

struct CXTPShadowsManager__CShadowWnd {
    char pad[0xc8];
    void* field_c8;
    void* field_cc;
    void* field_d0;
    void* field_d4;
    int method(int a, int b, int c);
};

int CXTPShadowsManager__CShadowWnd::method(int a, int b, int c)
{
    if (sub_6f0c90() == 1) {
        SetCursor(field_cc);
        return 1;
    }
    if (sub_6f0c90() == 0) {
        SetCursor(field_d0);
        return 1;
    }
    if (sub_6f0c90() == 2) {
        SetCursor(field_d4);
        return 1;
    }
    SetCursor(field_c8);
    return 1;
}
