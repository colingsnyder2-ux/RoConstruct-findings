// roc 2009-06 00766ba0  unit: CXTPPopupBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00766ba0
//
// 00766ba0  b81069a200           mov eax, 0xa26910
// 00766ba5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00766ba0()
{
    return &G;
}
