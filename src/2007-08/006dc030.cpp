// roc 2007-08 006dc030  unit: CXTPDockingPaneAutoHidePanel  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006dc030
//
// 006dc030  b834937d00           mov eax, 0x7d9334
// 006dc035  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006dc030()
{
    return &G;
}
