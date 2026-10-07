// roc 2008-06 006a7000  unit: CXTPControlComboBoxList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a7000
//
// 006a7000  b8e45e9600           mov eax, 0x965ee4
// 006a7005  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006a7000()
{
    return &G;
}
