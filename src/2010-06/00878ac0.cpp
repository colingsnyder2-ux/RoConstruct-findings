// roc 2010-06 00878ac0  unit: CXTPImageEditorDlg  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00878ac0
//
// 00878ac0  b8a8d5a600           mov eax, 0xa6d5a8
// 00878ac5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00878ac0()
{
    return &G;
}
