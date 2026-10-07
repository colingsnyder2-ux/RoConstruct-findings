// roc 2008-06 0044d440  unit: CRobloxApp  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044d440
//
// 0044d440  b8506c8100           mov eax, 0x816c50
// 0044d445  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0044d440()
{
    return &G;
}
