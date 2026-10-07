// roc 2010-06 008a5c10  unit: CXTPRibbonControlSystemPopupBarListItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a5c10
//
// 008a5c10  b848bdbe00           mov eax, 0xbebd48
// 008a5c15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a5c10()
{
    return &G;
}
