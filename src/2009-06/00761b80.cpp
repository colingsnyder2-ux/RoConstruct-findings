// roc 2009-06 00761b80  unit: CXTPControlButtonColor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00761b80
//
// 00761b80  b87066a200           mov eax, 0xa26670
// 00761b85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00761b80()
{
    return &G;
}
