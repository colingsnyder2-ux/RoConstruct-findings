// from server: 83% by colin
// roc 2007-08 00643640  unit: CXTPCommandBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643640
//
// 00643640  56                   push esi
// 00643641  8bf1                 mov esi, ecx
// 00643643  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 00643649  85c9                 test ecx, ecx
// 0064364b  740f                 je 0x64365c
// 0064364d  e892cbfeff           call 0x6301e4
// 00643652  c786f800000000000000 mov dword ptr [esi + 0xf8], 0
// 0064365c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00643660  85c9                 test ecx, ecx
// 00643662  898ef8000000         mov dword ptr [esi + 0xf8], ecx
// 00643668  7406                 je 0x643670
// 0064366a  56                   push esi
// 0064366b  e8d06f0300           call 0x67a640
// 00643670  5e                   pop esi
// 00643671  c20400               ret 4

struct CXTPCommandBar {
    char pad[0xf8];
    void* field_f8;
    void SetCommandBar(void* p);
};

extern "C" void __stdcall sub_6301E4(void* p);
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
