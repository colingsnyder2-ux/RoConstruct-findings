// roc 2008-06 00708b20  unit: CXTSplitterWnd  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00708b20
//
// 00708b20  8b442404             mov eax, dword ptr [esp + 4]
// 00708b24  898108010000         mov dword ptr [ecx + 0x108], eax
// 00708b2a  a802                 test al, 2
// 00708b2c  740d                 je 0x708b3b
// 00708b2e  c781fc00000000000000 mov dword ptr [ecx + 0xfc], 0
// 00708b38  c20400               ret 4
// 00708b3b  6a00                 push 0
// 00708b3d  81c1fc000000         add ecx, 0xfc
// 00708b43  51                   push ecx
// 00708b44  6a00                 push 0
// 00708b46  6a26                 push 0x26
// 00708b48  ff15902c8000         call dword ptr [0x802c90]
// 00708b4e  c20400               ret 4
// copied from an identical function in another client (function ?SetSomething@CXTSplitterWnd@ns_ROCX000029@@QAEXH@Z)

namespace ns_ROCX000029 {
extern "C" int (__stdcall *SystemParametersInfoA)(unsigned int, unsigned int, void*, unsigned int);

struct CXTSplitterWnd {
    char pad[0xfc];
    int field_fc;
    char pad2[8];
    int field_108;
    void SetSomething(int);
};

void CXTSplitterWnd::SetSomething(int value) {
    field_108 = value;
    if (value & 2) {
        field_fc = 0;
    } else {
        SystemParametersInfoA(0x26, 0, &field_fc, 0);
    }
}
}
