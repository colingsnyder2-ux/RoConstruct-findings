// roc 2009-06 00761ab0  unit: CXTPControlPopupColor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00761ab0
//
// 00761ab0  b85466a200           mov eax, 0xa26654
// 00761ab5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00761ab0()
{
    return &G;
}
