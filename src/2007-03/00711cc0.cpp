// roc 2007-03 00711cc0  unit: seg_00710000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00711cc0
//
// 00711cc0  56                   push esi
// 00711cc1  8bf1                 mov esi, ecx
// 00711cc3  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00711cc9  e84270f2ff           call 0x638d10
// 00711cce  8bc8                 mov ecx, eax
// 00711cd0  e84bb7f1ff           call 0x62d420
// 00711cd5  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00711cdb  e8f09bf2ff           call 0x63b8d0
// 00711ce0  8b4020               mov eax, dword ptr [eax + 0x20]
// 00711ce3  6a00                 push 0
// 00711ce5  6863f00000           push 0xf063
// 00711cea  6812010000           push 0x112
// 00711cef  50                   push eax
// 00711cf0  ff1550ee7700         call dword ptr [0x77ee50]
// 00711cf6  b801000000           mov eax, 1
// 00711cfb  5e                   pop esi
// 00711cfc  c20800               ret 8
// copied from an identical function in another client (function ?method@CXTPRibbonControlSystemButton@ns_ROCX00001a@@QAEHHH@Z)

namespace ns_ROCX00001a {
struct CXTPRibbonControlSystemButton {
    char pad[0xfc];
    void* field_fc;
    int method(int, int);
};

extern "C" void* __fastcall sub_643980(void*);
extern "C" void __fastcall sub_633C70(void*);
extern "C" void* __fastcall sub_646570(void*);
extern "C" long (__stdcall *SendMessageA)(void*, unsigned int, unsigned int, long);

int CXTPRibbonControlSystemButton::method(int a, int b) {
    void* p = sub_643980(field_fc);
    sub_633C70(p);
    void* q = sub_646570(field_fc);
    void* hwnd = *(void**)((char*)q + 0x20);
    SendMessageA(hwnd, 0x112, 0xf063, 0);
    return 1;
}
}
