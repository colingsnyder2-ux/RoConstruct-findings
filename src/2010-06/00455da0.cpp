// roc 2010-06 00455da0  unit: CRobloxDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00455da0
//
// 00455da0  b810cfa000           mov eax, 0xa0cf10
// 00455da5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00455da0()
{
    return &G;
}
