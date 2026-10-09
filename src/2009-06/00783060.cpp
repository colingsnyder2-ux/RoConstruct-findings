// roc 2009-06 00783060  unit: CXTSplitterWnd  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00783060
//
// 00783060  8b442404             mov eax, dword ptr [esp + 4]
// 00783064  898108010000         mov dword ptr [ecx + 0x108], eax
// 0078306a  a802                 test al, 2
// 0078306c  740d                 je 0x78307b
// 0078306e  c781fc00000000000000 mov dword ptr [ecx + 0xfc], 0
// 00783078  c20400               ret 4
// 0078307b  6a00                 push 0
// 0078307d  81c1fc000000         add ecx, 0xfc
// 00783083  51                   push ecx
// 00783084  6a00                 push 0
// 00783086  6a26                 push 0x26
// 00783088  ff1564ee8900         call dword ptr [0x89ee64]
// 0078308e  c20400               ret 4
// copied from an identical function in another client (function ?SetSomething@CXTSplitterWnd@ns_ROCX000020@@QAEXH@Z)

namespace ns_ROCX000020 {
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
