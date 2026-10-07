// roc 2010-06 008a5d60  unit: CXTPRibbonSystemPopupBarPage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a5d60
//
// 008a5d60  b89cbdbe00           mov eax, 0xbebd9c
// 008a5d65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a5d60()
{
    return &G;
}
