// roc 2007-08 006db4a0  unit: CXTPDockingPaneAutoHideWnd  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006db4a0
//
// 006db4a0  b8c0907d00           mov eax, 0x7d90c0
// 006db4a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006db4a0()
{
    return &G;
}
