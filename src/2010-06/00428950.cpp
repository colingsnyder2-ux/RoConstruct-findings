// roc 2010-06 00428950  unit: CPatchedControlComboBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00428950
//
// 00428950  b8d4dab700           mov eax, 0xb7dad4
// 00428955  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00428950()
{
    return &G;
}
