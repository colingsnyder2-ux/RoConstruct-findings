// roc 2011-06 0086f8a0  unit: CXTSplitterWnd  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086f8a0
//
// 0086f8a0  8b442404             mov eax, dword ptr [esp + 4]
// 0086f8a4  898108010000         mov dword ptr [ecx + 0x108], eax
// 0086f8aa  a802                 test al, 2
// 0086f8ac  740d                 je 0x86f8bb
// 0086f8ae  c781fc00000000000000 mov dword ptr [ecx + 0xfc], 0
// 0086f8b8  c20400               ret 4
// 0086f8bb  6a00                 push 0
// 0086f8bd  81c1fc000000         add ecx, 0xfc
// 0086f8c3  51                   push ecx
// 0086f8c4  6a00                 push 0
// 0086f8c6  6a26                 push 0x26
// 0086f8c8  ff155c1ba400         call dword ptr [0xa41b5c]
// 0086f8ce  c20400               ret 4
// copied from an identical function in another client (function ?SetSomething@CXTSplitterWnd@ns_ROCX00001b@@QAEXH@Z)

namespace ns_ROCX00001b {
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
