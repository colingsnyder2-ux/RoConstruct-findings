// roc 2008-06 007017e0  unit: CXTPTabClientWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007017e0
//
// 007017e0  b8a8b18500           mov eax, 0x85b1a8
// 007017e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007017e0()
{
    return &G;
}
