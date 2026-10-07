// roc 2007-08 006360f0  unit: CXTPControlComboBoxPopupBar  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006360f0
//
// 006360f0  b8a8538b00           mov eax, 0x8b53a8
// 006360f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006360f0()
{
    return &G;
}
