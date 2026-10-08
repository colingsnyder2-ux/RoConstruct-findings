// roc 2007-08 006f43b0  unit: CXTPImageEditorDlg  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f43b0
//
// 006f43b0  b8e8ba7d00           mov eax, 0x7dbae8
// 006f43b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f43b0()
{
    return &G;
}
