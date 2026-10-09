// roc 2009-06 00783b00  unit: CXTSplitterWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00783b00
//
// 00783b00  f6810801000008       test byte ptr [ecx + 0x108], 8
// 00783b07  7408                 je 0x783b11
// 00783b09  b812000000           mov eax, 0x12
// 00783b0e  c20800               ret 8
// 00783b11  e8f254f9ff           call 0x719008
// 00783b16  c20800               ret 8
// copied from an identical function in another client (function ?method@CXTSplitterWnd@ns_ROCX000023@@QAEHHH@Z)

namespace ns_ROCX000023 {
struct CXTSplitterWnd {
    int method(int, int);
};

extern "C" int __cdecl fn_ROCX000023();

int CXTSplitterWnd::method(int a, int b)
{
    if (*(unsigned char*)((char*)this + 0x108) & 8)
        return 0x12;
    return fn_ROCX000023();
}
}
