// roc 2007-08 006b49a0  unit: CXTPControlComboBoxGalleryPopupBar  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006b49a0
//
// 006b49a0  b8f0627d00           mov eax, 0x7d62f0
// 006b49a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006b49a0()
{
    return &G;
}
