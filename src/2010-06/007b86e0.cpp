// roc 2010-06 007b86e0  unit: CXTPCommandBar  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b86e0
//
// 007b86e0  56                   push esi
// 007b86e1  8bf1                 mov esi, ecx
// 007b86e3  8b8e68010000         mov ecx, dword ptr [esi + 0x168]
// 007b86e9  85c9                 test ecx, ecx
// 007b86eb  7413                 je 0x7b8700
// 007b86ed  e82af8feff           call 0x7a7f1c
// 007b86f2  8b442408             mov eax, dword ptr [esp + 8]
// 007b86f6  898668010000         mov dword ptr [esi + 0x168], eax
// 007b86fc  5e                   pop esi
// 007b86fd  c20400               ret 4
// 007b8700  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007b8704  898e68010000         mov dword ptr [esi + 0x168], ecx
// 007b870a  5e                   pop esi
// 007b870b  c20400               ret 4
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
