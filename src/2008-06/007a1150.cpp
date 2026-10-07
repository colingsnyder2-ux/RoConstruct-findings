// roc 2008-06 007a1150  unit: CXTWindowMap  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a1150
//
// 007a1150  b854f08600           mov eax, 0x86f054
// 007a1155  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007a1150()
{
    return &G;
}
