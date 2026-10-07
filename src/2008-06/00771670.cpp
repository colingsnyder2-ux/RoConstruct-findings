// roc 2008-06 00771670  unit: CXTPImageEditorDlg  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00771670
//
// 00771670  b8187e8600           mov eax, 0x867e18
// 00771675  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00771670()
{
    return &G;
}
