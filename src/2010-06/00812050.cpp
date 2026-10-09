// roc 2010-06 00812050  unit: CXTSplitterWnd  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00812050
//
// 00812050  8b442404             mov eax, dword ptr [esp + 4]
// 00812054  898108010000         mov dword ptr [ecx + 0x108], eax
// 0081205a  a802                 test al, 2
// 0081205c  740d                 je 0x81206b
// 0081205e  c781fc00000000000000 mov dword ptr [ecx + 0xfc], 0
// 00812068  c20400               ret 4
// 0081206b  6a00                 push 0
// 0081206d  81c1fc000000         add ecx, 0xfc
// 00812073  51                   push ecx
// 00812074  6a00                 push 0
// 00812076  6a26                 push 0x26
// 00812078  ff1594ba9e00         call dword ptr [0x9eba94]
// 0081207e  c20400               ret 4
// copied from an identical function in another client (function ?SetSomething@CXTSplitterWnd@ns_ROCX00002a@@QAEXH@Z)

namespace ns_ROCX00002a {
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
