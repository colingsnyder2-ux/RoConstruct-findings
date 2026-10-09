// roc 2008-06 006b4f20  unit: CXTPCommandBar  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b4f20
//
// 006b4f20  56                   push esi
// 006b4f21  8bf1                 mov esi, ecx
// 006b4f23  8b8e68010000         mov ecx, dword ptr [esi + 0x168]
// 006b4f29  85c9                 test ecx, ecx
// 006b4f2b  7413                 je 0x6b4f40
// 006b4f2d  e8b2bcfeff           call 0x6a0be4
// 006b4f32  8b442408             mov eax, dword ptr [esp + 8]
// 006b4f36  898668010000         mov dword ptr [esi + 0x168], eax
// 006b4f3c  5e                   pop esi
// 006b4f3d  c20400               ret 4
// 006b4f40  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b4f44  898e68010000         mov dword ptr [esi + 0x168], ecx
// 006b4f4a  5e                   pop esi
// 006b4f4b  c20400               ret 4
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
