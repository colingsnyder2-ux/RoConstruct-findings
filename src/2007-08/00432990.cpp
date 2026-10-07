// roc 2007-08 00432990  unit: CMainFrame  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00432990
//
// 00432990  b880b67800           mov eax, 0x78b680
// 00432995  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00432990()
{
    return &G;
}
