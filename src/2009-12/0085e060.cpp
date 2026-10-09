// roc 2009-12 0085e060  unit: CXTSplitterWnd  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085e060
//
// 0085e060  8b442404             mov eax, dword ptr [esp + 4]
// 0085e064  898108010000         mov dword ptr [ecx + 0x108], eax
// 0085e06a  a802                 test al, 2
// 0085e06c  740d                 je 0x85e07b
// 0085e06e  c781fc00000000000000 mov dword ptr [ecx + 0xfc], 0
// 0085e078  c20400               ret 4
// 0085e07b  6a00                 push 0
// 0085e07d  81c1fc000000         add ecx, 0xfc
// 0085e083  51                   push ecx
// 0085e084  6a00                 push 0
// 0085e086  6a26                 push 0x26
// 0085e088  ff1500cc9800         call dword ptr [0x98cc00]
// 0085e08e  c20400               ret 4
// copied from an identical function in another client (function ?SetSomething@CXTSplitterWnd@ns_ROCX00002e@@QAEXH@Z)

namespace ns_ROCX00002e {
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
