// roc 2007-08 006b3950  unit: CXTPControlComboBoxGalleryPopupBar  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3950
//
// 006b3950  b8b0818b00           mov eax, 0x8b81b0
// 006b3955  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006b3950()
{
    return &G;
}
