// roc 2007-08 00636240  unit: CXTPControlComboBoxList  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00636240
//
// 00636240  b8c4538b00           mov eax, 0x8b53c4
// 00636245  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00636240()
{
    return &G;
}
