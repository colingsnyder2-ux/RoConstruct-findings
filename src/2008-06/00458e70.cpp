// roc 2008-06 00458e70  unit: CRobloxView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00458e70
//
// 00458e70  b870908100           mov eax, 0x819070
// 00458e75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00458e70()
{
    return &G;
}
