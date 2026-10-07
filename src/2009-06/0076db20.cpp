// roc 2009-06 0076db20  unit: CXTPControlCheckBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076db20
//
// 0076db20  b8a46aa200           mov eax, 0xa26aa4
// 0076db25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0076db20()
{
    return &G;
}
