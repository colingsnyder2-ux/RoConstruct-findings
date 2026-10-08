// roc 2007-08 0042ec80  unit: CPatchedControlComboBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042ec80
//
// 0042ec80  b8706a8800           mov eax, 0x886a70
// 0042ec85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042ec80()
{
    return &G;
}
