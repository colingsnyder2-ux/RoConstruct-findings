// roc 2011-06 00816820  unit: CXTPControlComboBoxPopupBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816820
//
// 00816820  b8cc59c900           mov eax, 0xc959cc
// 00816825  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00816820()
{
    return &G;
}
