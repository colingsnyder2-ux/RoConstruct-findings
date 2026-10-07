// roc 2007-08 00676180  unit: CXTPCustomizeCommandsPage  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00676180
//
// 00676180  b874cb7c00           mov eax, 0x7ccb74
// 00676185  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00676180()
{
    return &G;
}
