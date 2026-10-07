// roc 2008-06 006aa2b0  unit: CPatchedControlComboBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aa2b0
//
// 006aa2b0  b890148500           mov eax, 0x851490
// 006aa2b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006aa2b0()
{
    return &G;
}
