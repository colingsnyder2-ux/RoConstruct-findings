// roc 2011-06 008fe720  unit: CXTPRibbonSystemPopupBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fe720
//
// 008fe720  b830b2c900           mov eax, 0xc9b230
// 008fe725  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008fe720()
{
    return &G;
}
