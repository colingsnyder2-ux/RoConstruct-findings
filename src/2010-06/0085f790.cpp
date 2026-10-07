// roc 2010-06 0085f790  unit: CXTPDockingPaneAutoHideWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085f790
//
// 0085f790  b890aaa600           mov eax, 0xa6aa90
// 0085f795  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0085f790()
{
    return &G;
}
