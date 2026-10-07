// roc 2012-06 00430970  unit: CRobloxTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00430970
//
// 00430970  b8e4f0b400           mov eax, 0xb4f0e4
// 00430975  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00430970()
{
    return &G;
}
