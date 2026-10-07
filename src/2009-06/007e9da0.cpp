// roc 2009-06 007e9da0  unit: CXTPImageEditorDlg  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e9da0
//
// 007e9da0  b8408e9000           mov eax, 0x908e40
// 007e9da5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007e9da0()
{
    return &G;
}
