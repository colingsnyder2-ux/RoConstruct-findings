// roc 2007-08 0044cbf0  unit: CRobloxDHtmlDialog  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0044cbf0
//
// 0044cbf0  b8900c7900           mov eax, 0x790c90
// 0044cbf5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0044cbf0()
{
    return &G;
}
