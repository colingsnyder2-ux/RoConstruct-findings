// from server: 26% by colin
struct CXTCaptionPopupWnd {
    char pad[0x54];
    int field54;
    int field58;
    int field5c;
    char pad2[0x1f0 - 0x60];
    char sub1f0[0xb0];
    char sub2a0[8];
    char sub2a8[8];
    CXTCaptionPopupWnd();
};

extern "C" void __stdcall sub_6305da();
extern "C" void __stdcall sub_69f5a0();
extern "C" void __stdcall sub_69f1a0();
extern "C" void __stdcall sub_722360();
extern "C" void __stdcall sub_715b30();

CXTCaptionPopupWnd::CXTCaptionPopupWnd()
{
    sub_6305da();
    *(int*)this = 0x7df06c;
    sub_69f5a0();
    sub_69f1a0();
    sub_722360();
    sub_722360();
    field58 = 0;
    field5c = 0;
    field54 = 0;
    sub_715b30();
}
