// roc 2007-08 00401030  unit: CAboutRobloxDialog  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00401030
//
// 00401030  b828477800           mov eax, 0x784728
// 00401035  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00401030()
{
    return &G;
}
