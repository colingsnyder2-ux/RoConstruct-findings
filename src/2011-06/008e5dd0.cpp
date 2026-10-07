// roc 2011-06 008e5dd0  unit: CXTSplitterWndThemeFactory  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e5dd0
//
// 008e5dd0  b84c8aad00           mov eax, 0xad8a4c
// 008e5dd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008e5dd0()
{
    return &G;
}
