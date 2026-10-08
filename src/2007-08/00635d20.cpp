// roc 2007-08 00635d20  unit: CXTPControlComboBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00635d20
//
// 00635d20  b88c538b00           mov eax, 0x8b538c
// 00635d25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00635d20()
{
    return &G;
}
