// roc 2011-06 008c1c20  unit: CXTPDockingPaneMiniWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c1c20
//
// 008c1c20  b8bc5dad00           mov eax, 0xad5dbc
// 008c1c25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008c1c20()
{
    return &G;
}
