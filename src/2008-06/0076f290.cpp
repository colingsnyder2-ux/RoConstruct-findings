// from server: 100% by auto
// roc 2008-06 0076f290  unit: CXTPImageEditorDlg::CDlgToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076f290
//
// 0076f290  b8c0798600           mov eax, 0x8679c0
// 0076f295  c3                   ret 

extern char G;

char* func_0076f290()
{
    return &G;
}
