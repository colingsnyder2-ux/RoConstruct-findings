// from server: 100% by atomic.potato
// roc 2008-06 007095c0  unit: CXTSplitterWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007095c0
//
// 007095c0  f6810801000008       test byte ptr [ecx + 0x108], 8
// 007095c7  7408                 je 0x7095d1
// 007095c9  b812000000           mov eax, 0x12
// 007095ce  c20800               ret 8
// 007095d1  e89276f9ff           call 0x6a0c68
// 007095d6  c20800               ret 8

struct CXTSplitterWnd
{
    unsigned char pad[264];
    unsigned char flags;
    int f(int, int);
};

extern int func_006a0c68();

int CXTSplitterWnd::f(int, int)
{
    if (flags & 8)
        return 18;
    return func_006a0c68();
}
