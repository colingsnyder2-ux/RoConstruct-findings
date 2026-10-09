// from server: 100% by colin
// roc 2007-08 00719d50  unit: CXTPRibbonControlSystemButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00719d50
//
// 00719d50  56                   push esi
// 00719d51  8bf1                 mov esi, ecx
// 00719d53  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00719d59  e8229cf2ff           call 0x643980
// 00719d5e  8bc8                 mov ecx, eax
// 00719d60  e80b9ff1ff           call 0x633c70
// 00719d65  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00719d6b  e800c8f2ff           call 0x646570
// 00719d70  8b4020               mov eax, dword ptr [eax + 0x20]
// 00719d73  6a00                 push 0
// 00719d75  6863f00000           push 0xf063
// 00719d7a  6812010000           push 0x112
// 00719d7f  50                   push eax
// 00719d80  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00719d86  b801000000           mov eax, 1
// 00719d8b  5e                   pop esi
// 00719d8c  c20800               ret 8

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
