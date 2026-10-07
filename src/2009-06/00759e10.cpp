// roc 2009-06 00759e10  unit: CXTTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00759e10
//
// 00759e10  b8bc618f00           mov eax, 0x8f61bc
// 00759e15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00759e10()
{
    return &G;
}
