// roc 2007-08 00455e10  unit: CRobloxView  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00455e10
//
// 00455e10  b8902a7900           mov eax, 0x792a90
// 00455e15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00455e10()
{
    return &G;
}
