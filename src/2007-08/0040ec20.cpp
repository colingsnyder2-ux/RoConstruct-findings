// roc 2007-08 0040ec20  unit: CChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040ec20
//
// 0040ec20  b808697800           mov eax, 0x786908
// 0040ec25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040ec20()
{
    return &G;
}
