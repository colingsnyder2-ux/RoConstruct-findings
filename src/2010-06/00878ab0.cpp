// roc 2010-06 00878ab0  unit: CXTPImageEditorDlg  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00878ab0
//
// 00878ab0  b8f4d4a600           mov eax, 0xa6d4f4
// 00878ab5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00878ab0()
{
    return &G;
}
