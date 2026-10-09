// roc 2009-12 008045e0  unit: CXTPCommandBar  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008045e0
//
// 008045e0  56                   push esi
// 008045e1  8bf1                 mov esi, ecx
// 008045e3  8b8e68010000         mov ecx, dword ptr [esi + 0x168]
// 008045e9  85c9                 test ecx, ecx
// 008045eb  7413                 je 0x804600
// 008045ed  e8eaf7feff           call 0x7f3ddc
// 008045f2  8b442408             mov eax, dword ptr [esp + 8]
// 008045f6  898668010000         mov dword ptr [esi + 0x168], eax
// 008045fc  5e                   pop esi
// 008045fd  c20400               ret 4
// 00804600  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00804604  898e68010000         mov dword ptr [esi + 0x168], ecx
// 0080460a  5e                   pop esi
// 0080460b  c20400               ret 4
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
