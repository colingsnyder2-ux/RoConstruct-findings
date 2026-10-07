// roc 2008-06 006a6ab0  unit: CXTPControlComboBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6ab0
//
// 006a6ab0  b8ac5e9600           mov eax, 0x965eac
// 006a6ab5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006a6ab0()
{
    return &G;
}
