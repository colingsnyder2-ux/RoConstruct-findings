// roc 2010-06 00453560  unit: CRobloxApp  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00453560
//
// 00453560  b8b8c6a000           mov eax, 0xa0c6b8
// 00453565  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00453560()
{
    return &G;
}
