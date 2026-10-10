// from server: 31% by colin
struct CXTPRibbonControlSystemButton {
    char pad[0x1ec];
    int field_1ec;
    void method();
};

extern "C" void __fastcall sub_67A190(void*);
extern "C" void __fastcall sub_643830(void*);
extern "C" int __stdcall SetRect(int*, int, int, int, int);

void CXTPRibbonControlSystemButton::method() {
    sub_67A190(this);
    *(int**)((char*)this + 0x1ec) = 0;
    *(int*)((char*)this) = 0x7e0a0c;
    *(int*)((char*)this + 0x54) = 0x7e09fc;
    *(int*)((char*)this + 0x5c) = 0x7e099c;
    SetRect(&field_1ec, 6, 0x12, 6, 0x1d);
    sub_643830(this);
}
