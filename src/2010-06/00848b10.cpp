// roc 2010-06 00848b10  unit: CXTPRibbonBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00848b10
//
// 00848b10  b88497be00           mov eax, 0xbe9784
// 00848b15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00848b10()
{
    return &G;
}
