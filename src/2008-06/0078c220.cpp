// roc 2008-06 0078c220  unit: CXTColorBase  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c220
//
// 0078c220  b8e0a58600           mov eax, 0x86a5e0
// 0078c225  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0078c220()
{
    return &G;
}
