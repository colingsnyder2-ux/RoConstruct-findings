// roc 2011-06 0081aba0  unit: CXTPCommandBar  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081aba0
//
// 0081aba0  56                   push esi
// 0081aba1  8bf1                 mov esi, ecx
// 0081aba3  8b8e68010000         mov ecx, dword ptr [esi + 0x168]
// 0081aba9  85c9                 test ecx, ecx
// 0081abab  7413                 je 0x81abc0
// 0081abad  e828fafeff           call 0x80a5da
// 0081abb2  8b442408             mov eax, dword ptr [esp + 8]
// 0081abb6  898668010000         mov dword ptr [esi + 0x168], eax
// 0081abbc  5e                   pop esi
// 0081abbd  c20400               ret 4
// 0081abc0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0081abc4  898e68010000         mov dword ptr [esi + 0x168], ecx
// 0081abca  5e                   pop esi
// 0081abcb  c20400               ret 4
// copied from an identical function in another client (function ?SetField@CXTPCommandBar@ns_ROCX000001@@QAEXPAX@Z)

namespace ns_ROCX000001 {
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
}
