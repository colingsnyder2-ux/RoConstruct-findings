// roc 2011-06 008f7dc0  unit: CXTPRibbonTab  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f7dc0
//
// 008f7dc0  b818afc900           mov eax, 0xc9af18
// 008f7dc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008f7dc0()
{
    return &G;
}
