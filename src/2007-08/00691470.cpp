// from server: 100% by colin
// roc 2007-08 00691470  unit: CXTSplitterWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00691470
//
// 00691470  f6810801000008       test byte ptr [ecx + 0x108], 8
// 00691477  7408                 je 0x691481
// 00691479  b812000000           mov eax, 0x12
// 0069147e  c20800               ret 8
// 00691481  e8b8edf9ff           call 0x63023e
// 00691486  c20800               ret 8

struct CXTSplitterWnd {
    int method(int, int);
};

extern "C" int __cdecl func_0063023e();

int CXTSplitterWnd::method(int a, int b)
{
    if (*(unsigned char*)((char*)this + 0x108) & 8)
        return 0x12;
    return func_0063023e();
}
