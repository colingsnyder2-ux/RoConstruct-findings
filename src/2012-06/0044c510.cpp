// roc 2012-06 0044c510  unit: CClassTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0044c510
//
// 0044c510  b8c02fb500           mov eax, 0xb52fc0
// 0044c515  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0044c510()
{
    return &G;
}
