// roc 2012-06 004354e0  unit: CPatchedControlComboBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004354e0
//
// 004354e0  b87c60d600           mov eax, 0xd6607c
// 004354e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004354e0()
{
    return &G;
}
