// roc 2010-06 008647d0  unit: CXTPDockingPaneMiniWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008647d0
//
// 008647d0  b8acb3a600           mov eax, 0xa6b3ac
// 008647d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008647d0()
{
    return &G;
}
