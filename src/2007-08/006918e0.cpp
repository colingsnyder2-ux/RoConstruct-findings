// roc 2007-08 006918e0  unit: CXTSplitterWnd  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006918e0
//
// 006918e0  b8ac077d00           mov eax, 0x7d07ac
// 006918e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006918e0()
{
    return &G;
}
