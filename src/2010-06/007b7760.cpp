// roc 2010-06 007b7760  unit: CPatchedControlComboBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b7760
//
// 007b7760  b8c86ba500           mov eax, 0xa56bc8
// 007b7765  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007b7760()
{
    return &G;
}
