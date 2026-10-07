// roc 2008-06 006b4ad0  unit: CXTPCommandBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b4ad0
//
// 006b4ad0  b884619600           mov eax, 0x966184
// 006b4ad5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006b4ad0()
{
    return &G;
}
