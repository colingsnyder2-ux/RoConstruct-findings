// roc 2011-06 004925a0  unit: CSelectionCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004925a0
//
// 004925a0  b8ac4fa700           mov eax, 0xa74fac
// 004925a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004925a0()
{
    return &G;
}
