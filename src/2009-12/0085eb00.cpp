// roc 2009-12 0085eb00  unit: CXTSplitterWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085eb00
//
// 0085eb00  f6810801000008       test byte ptr [ecx + 0x108], 8
// 0085eb07  7408                 je 0x85eb11
// 0085eb09  b812000000           mov eax, 0x12
// 0085eb0e  c20800               ret 8
// 0085eb11  e81a53f9ff           call 0x7f3e30
// 0085eb16  c20800               ret 8
// copied from an identical function in another client (function ?method@CXTSplitterWnd@ns_ROCX000031@@QAEHHH@Z)

namespace ns_ROCX000031 {
struct CXTSplitterWnd {
    int method(int, int);
};

extern "C" int __cdecl fn_ROCX000031();

int CXTSplitterWnd::method(int a, int b)
{
    if (*(unsigned char*)((char*)this + 0x108) & 8)
        return 0x12;
    return fn_ROCX000031();
}
}
