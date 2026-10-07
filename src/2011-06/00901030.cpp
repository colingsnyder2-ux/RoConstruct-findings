// roc 2011-06 00901030  unit: CXTShadowHook  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901030
//
// 00901030  b838e1ad00           mov eax, 0xade138
// 00901035  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00901030()
{
    return &G;
}
