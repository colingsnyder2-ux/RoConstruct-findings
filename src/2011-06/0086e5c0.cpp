// roc 2011-06 0086e5c0  unit: CXTPDockingPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e5c0
//
// 0086e5c0  b838c2ac00           mov eax, 0xacc238
// 0086e5c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0086e5c0()
{
    return &G;
}
