// roc 2011-06 008660f0  unit: CXTPTabClientWnd::CWorkspace  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008660f0
//
// 008660f0  b8d0b1ac00           mov eax, 0xacb1d0
// 008660f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008660f0()
{
    return &G;
}
