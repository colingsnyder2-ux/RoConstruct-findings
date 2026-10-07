// roc 2011-06 00816970  unit: CXTPControlComboBoxList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816970
//
// 00816970  b8e859c900           mov eax, 0xc959e8
// 00816975  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00816970()
{
    return &G;
}
