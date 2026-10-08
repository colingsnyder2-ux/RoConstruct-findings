// from server: 100% by colin
// roc 2007-08 00643a90  unit: CXTPCommandBar  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643a90
//
// 00643a90  56                   push esi
// 00643a91  8bf1                 mov esi, ecx
// 00643a93  8b8e68010000         mov ecx, dword ptr [esi + 0x168]
// 00643a99  85c9                 test ecx, ecx
// 00643a9b  7413                 je 0x643ab0
// 00643a9d  e842c7feff           call 0x6301e4
// 00643aa2  8b442408             mov eax, dword ptr [esp + 8]
// 00643aa6  898668010000         mov dword ptr [esi + 0x168], eax
// 00643aac  5e                   pop esi
// 00643aad  c20400               ret 4
// 00643ab0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00643ab4  898e68010000         mov dword ptr [esi + 0x168], ecx
// 00643aba  5e                   pop esi
// 00643abb  c20400               ret 4

struct CXTPCommandBar {
    char pad[0x168];
    void* field_168;
    void SetField(void* p);
};

extern "C" void __fastcall sub_6301E4(void* p);

void CXTPCommandBar::SetField(void* p) {
    if (field_168 != 0) {
        sub_6301E4(field_168);
    }
    field_168 = p;
}
