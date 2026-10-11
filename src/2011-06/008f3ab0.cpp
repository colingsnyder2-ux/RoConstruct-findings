// from server: 26% by atomic.potato
struct CXTCaptionPopupWnd {
    char pad0[0x54];
    int field54;
    int field58;
    int field5c;
    char pad60[0x190];
    char field1f0[0xb0];
    char field2a0[8];
    char field2a8[8];
    CXTCaptionPopupWnd();
};

extern "C" void __stdcall sub_80a946();
extern "C" void __stdcall sub_87e960();
extern "C" void __stdcall sub_87e520();
extern "C" void __stdcall sub_903160();
extern "C" void __stdcall sub_8f34c0();

CXTCaptionPopupWnd::CXTCaptionPopupWnd()
{
    sub_80a946();
    *(void**)this = (void*)0xada7e4;
    sub_87e960();
    sub_87e520();
    sub_903160();
    sub_903160();
    field58 = 0;
    field5c = 0;
    field54 = 0;
    sub_8f34c0();
}
