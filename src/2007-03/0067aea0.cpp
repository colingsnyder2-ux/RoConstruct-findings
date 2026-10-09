// roc 2007-03 0067aea0  unit: seg_00670000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067aea0
//
// 0067aea0  f6810801000008       test byte ptr [ecx + 0x108], 8
// 0067aea7  7408                 je 0x67aeb1
// 0067aea9  b812000000           mov eax, 0x12
// 0067aeae  c20800               ret 8
// 0067aeb1  e81c38faff           call 0x61e6d2
// 0067aeb6  c20800               ret 8
// copied from an identical function in another client (function ?method@CXTSplitterWnd@ns_ROCX000039@@QAEHHH@Z)

namespace ns_ROCX000039 {
struct CXTSplitterWnd {
    int method(int, int);
};

extern "C" int __cdecl fn_ROCX000039();

int CXTSplitterWnd::method(int a, int b)
{
    if (*(unsigned char*)((char*)this + 0x108) & 8)
        return 0x12;
    return fn_ROCX000039();
}
}
