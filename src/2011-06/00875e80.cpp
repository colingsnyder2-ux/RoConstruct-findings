// roc 2011-06 00875e80  unit: CXTPDockingPaneManager  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00875e80
//
// 00875e80  b814d5ac00           mov eax, 0xacd514
// 00875e85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00875e80()
{
    return &G;
}
