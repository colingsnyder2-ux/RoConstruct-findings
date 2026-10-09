// roc 2011-06 00870340  unit: CXTSplitterWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00870340
//
// 00870340  f6810801000008       test byte ptr [ecx + 0x108], 8
// 00870347  7408                 je 0x870351
// 00870349  b812000000           mov eax, 0x12
// 0087034e  c20800               ret 8
// 00870351  e8d8a2f9ff           call 0x80a62e
// 00870356  c20800               ret 8
// copied from an identical function in another client (function ?method@CXTSplitterWnd@ns_ROCX00001e@@QAEHHH@Z)

namespace ns_ROCX00001e {
struct CXTSplitterWnd {
    int method(int, int);
};

extern "C" int __cdecl fn_ROCX00001e();

int CXTSplitterWnd::method(int a, int b)
{
    if (*(unsigned char*)((char*)this + 0x108) & 8)
        return 0x12;
    return fn_ROCX00001e();
}
}
