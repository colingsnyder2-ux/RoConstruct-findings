// roc 2010-06 007e8e10  unit: CXTTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e8e10
//
// 007e8e10  b868a9a500           mov eax, 0xa5a968
// 007e8e15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007e8e10()
{
    return &G;
}
