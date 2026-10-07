// roc 2012-06 004925c0  unit: CRobloxView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004925c0
//
// 004925c0  b8f4e2b500           mov eax, 0xb5e2f4
// 004925c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004925c0()
{
    return &G;
}
