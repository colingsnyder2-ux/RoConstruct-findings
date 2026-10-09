// roc 2009-06 0072d4a0  unit: CXTPCommandBar  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072d4a0
//
// 0072d4a0  56                   push esi
// 0072d4a1  8bf1                 mov esi, ecx
// 0072d4a3  8b8e68010000         mov ecx, dword ptr [esi + 0x168]
// 0072d4a9  85c9                 test ecx, ecx
// 0072d4ab  7413                 je 0x72d4c0
// 0072d4ad  e8f6bafeff           call 0x718fa8
// 0072d4b2  8b442408             mov eax, dword ptr [esp + 8]
// 0072d4b6  898668010000         mov dword ptr [esi + 0x168], eax
// 0072d4bc  5e                   pop esi
// 0072d4bd  c20400               ret 4
// 0072d4c0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0072d4c4  898e68010000         mov dword ptr [esi + 0x168], ecx
// 0072d4ca  5e                   pop esi
// 0072d4cb  c20400               ret 4
// copied from an identical function in another client (function ?SetField@CXTPCommandBar@ns_ROCX000003@@QAEXPAX@Z)

namespace ns_ROCX000003 {
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
