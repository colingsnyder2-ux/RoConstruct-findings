// roc 2007-08 006778c0  unit: CXTPPopupToolBar  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006778c0
//
// 006778c0  b8846a8b00           mov eax, 0x8b6a84
// 006778c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006778c0()
{
    return &G;
}
