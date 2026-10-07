// roc 2009-06 007e9d90  unit: CXTPImageEditorDlg  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e9d90
//
// 007e9d90  b8908d9000           mov eax, 0x908d90
// 007e9d95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007e9d90()
{
    return &G;
}
