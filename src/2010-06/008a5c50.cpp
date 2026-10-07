// roc 2010-06 008a5c50  unit: CXTPRibbonControlSystemPopupBarListCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a5c50
//
// 008a5c50  b864bdbe00           mov eax, 0xbebd64
// 008a5c55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a5c50()
{
    return &G;
}
