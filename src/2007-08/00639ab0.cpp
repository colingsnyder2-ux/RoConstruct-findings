// roc 2007-08 00639ab0  unit: CXTPControlComboBoxList  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00639ab0
//
// 00639ab0  b828617c00           mov eax, 0x7c6128
// 00639ab5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00639ab0()
{
    return &G;
}
