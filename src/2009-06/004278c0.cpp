// roc 2009-06 004278c0  unit: CPatchedControlComboBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004278c0
//
// 004278c0  b8bc099e00           mov eax, 0x9e09bc
// 004278c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004278c0()
{
    return &G;
}
