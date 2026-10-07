// roc 2007-08 0070eaa0  unit: CXTSplitterWndThemeFactory  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0070eaa0
//
// 0070eaa0  b8bce27d00           mov eax, 0x7de2bc
// 0070eaa5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0070eaa0()
{
    return &G;
}
