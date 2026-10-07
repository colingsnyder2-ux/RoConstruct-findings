// roc 2008-06 0078c210  unit: CXTColorBase  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c210
//
// 0078c210  b860a58600           mov eax, 0x86a560
// 0078c215  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0078c210()
{
    return &G;
}
