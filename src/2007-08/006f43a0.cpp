// roc 2007-08 006f43a0  unit: CXTPImageEditorDlg  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006f43a0
//
// 006f43a0  b834ba7d00           mov eax, 0x7dba34
// 006f43a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f43a0()
{
    return &G;
}
