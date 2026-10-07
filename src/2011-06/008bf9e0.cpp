// roc 2011-06 008bf9e0  unit: CXTPDockingPaneMiniWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bf9e0
//
// 008bf9e0  b8505bad00           mov eax, 0xad5b50
// 008bf9e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008bf9e0()
{
    return &G;
}
