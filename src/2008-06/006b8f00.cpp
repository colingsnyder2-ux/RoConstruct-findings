// roc 2008-06 006b8f00  unit: CXTPCommandBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b8f00
//
// 006b8f00  b8d01d8500           mov eax, 0x851dd0
// 006b8f05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006b8f00()
{
    return &G;
}
