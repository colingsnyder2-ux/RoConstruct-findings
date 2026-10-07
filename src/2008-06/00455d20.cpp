// roc 2008-06 00455d20  unit: CRobloxDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00455d20
//
// 00455d20  b80c7f8100           mov eax, 0x817f0c
// 00455d25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00455d20()
{
    return &G;
}
