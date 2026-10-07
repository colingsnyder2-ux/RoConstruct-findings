// roc 2007-08 0045bd40  unit: CAboutRobloxDialog  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0045bd40
//
// 0045bd40  b8f83f7900           mov eax, 0x793ff8
// 0045bd45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0045bd40()
{
    return &G;
}
