// roc 2011-06 00816410  unit: CXTPControlComboBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816410
//
// 00816410  b8b059c900           mov eax, 0xc959b0
// 00816415  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00816410()
{
    return &G;
}
