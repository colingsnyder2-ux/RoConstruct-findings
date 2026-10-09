// roc 2010-06 00812af0  unit: CXTSplitterWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00812af0
//
// 00812af0  f6810801000008       test byte ptr [ecx + 0x108], 8
// 00812af7  7408                 je 0x812b01
// 00812af9  b812000000           mov eax, 0x12
// 00812afe  c20800               ret 8
// 00812b01  e86a54f9ff           call 0x7a7f70
// 00812b06  c20800               ret 8
// copied from an identical function in another client (function ?method@CXTSplitterWnd@ns_ROCX00002d@@QAEHHH@Z)

namespace ns_ROCX00002d {
struct CXTSplitterWnd {
    int method(int, int);
};

extern "C" int __cdecl fn_ROCX00002d();

int CXTSplitterWnd::method(int a, int b)
{
    if (*(unsigned char*)((char*)this + 0x108) & 8)
        return 0x12;
    return fn_ROCX00002d();
}
}
