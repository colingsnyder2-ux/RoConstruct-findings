// roc 2008-06 0078c230  unit: CXTColorBase  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c230
//
// 0078c230  b860a68600           mov eax, 0x86a660
// 0078c235  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0078c230()
{
    return &G;
}
