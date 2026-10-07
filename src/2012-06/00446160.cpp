// roc 2012-06 00446160  unit: CMainFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00446160
//
// 00446160  b8c416b500           mov eax, 0xb516c4
// 00446165  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00446160()
{
    return &G;
}
