// roc 2007-08 006dde30  unit: CXTPDockingPaneKeyboardHook  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006dde30
//
// 006dde30  b808967d00           mov eax, 0x7d9608
// 006dde35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006dde30()
{
    return &G;
}
