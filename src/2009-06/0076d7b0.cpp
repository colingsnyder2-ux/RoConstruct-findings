// roc 2009-06 0076d7b0  unit: CXTPControlWindowList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076d7b0
//
// 0076d7b0  b8e069a200           mov eax, 0xa269e0
// 0076d7b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0076d7b0()
{
    return &G;
}
