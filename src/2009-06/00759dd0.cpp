// roc 2009-06 00759dd0  unit: CXTTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00759dd0
//
// 00759dd0  b8d8618f00           mov eax, 0x8f61d8
// 00759dd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00759dd0()
{
    return &G;
}
