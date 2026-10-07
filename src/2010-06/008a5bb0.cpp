// roc 2010-06 008a5bb0  unit: CXTPRibbonControlSystemPopupBarButton  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a5bb0
//
// 008a5bb0  b82cbdbe00           mov eax, 0xbebd2c
// 008a5bb5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a5bb0()
{
    return &G;
}
