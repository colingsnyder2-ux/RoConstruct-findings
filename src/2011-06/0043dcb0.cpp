// roc 2011-06 0043dcb0  unit: CMemberTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043dcb0
//
// 0043dcb0  b8a07fa600           mov eax, 0xa67fa0
// 0043dcb5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0043dcb0()
{
    return &G;
}
