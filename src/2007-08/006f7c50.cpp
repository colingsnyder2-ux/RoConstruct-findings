// from server: 77% by colin
struct CXTMaskEditT {
    char pad0[0x54];
    int field54;
    int field58;
    char pad5c[4];
    int field60;
    char pad64[0x1c];
    char field80[4];
    char field84[4];
    void Method150();
    void Method6f7b60();
    void Method6f7540(int*, int);
    void Method6f76e0(int*, int);
    void Method6f7c50(int);
};

extern "C" int __stdcall sub_77dcc8(void*);
extern "C" void __stdcall sub_77e41c(void*, int, int);

void CXTMaskEditT::Method6f7c50(int arg) {
    int ebx = sub_77dcc8(&field84);
    int* edi = &field54;
    if (field54 >= ebx) {
        (*(void (__thiscall**)(CXTMaskEditT*))(*(int*)this + 0x150))(this);
        return;
    }
    if (field54 != field58) {
        Method6f7b60();
    }
    Method6f7540(edi, 1);
    if (field60 != 0) {
        sub_77e41c(&field80, field54, arg);
    } else {
        Method6f76e0(edi, arg);
    }
    if (field54 < ebx) {
        field54 = field54 + 1;
    }
    Method6f7540(edi, 1);
    field58 = field54;
}
