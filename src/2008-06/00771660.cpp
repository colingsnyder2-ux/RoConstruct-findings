// roc 2008-06 00771660  unit: CXTPImageEditorDlg  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00771660
//
// 00771660  b8687d8600           mov eax, 0x867d68
// 00771665  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00771660()
{
    return &G;
}
