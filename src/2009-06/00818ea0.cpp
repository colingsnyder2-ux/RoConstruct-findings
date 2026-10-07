// roc 2009-06 00818ea0  unit: CXTMemDC  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00818ea0
//
// 00818ea0  b8fcf59000           mov eax, 0x90f5fc
// 00818ea5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00818ea0()
{
    return &G;
}
