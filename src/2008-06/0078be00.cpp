// roc 2008-06 0078be00  unit: CXTColorPageCustom  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078be00
//
// 0078be00  b8c4a48600           mov eax, 0x86a4c4
// 0078be05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0078be00()
{
    return &G;
}
