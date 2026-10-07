// roc 2012-06 00449740  unit: CMemberTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00449740
//
// 00449740  b8c024b500           mov eax, 0xb524c0
// 00449745  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00449740()
{
    return &G;
}
