// roc 2010-06 007b3fd0  unit: CXTPControlComboBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b3fd0
//
// 007b3fd0  b83861be00           mov eax, 0xbe6138
// 007b3fd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007b3fd0()
{
    return &G;
}
