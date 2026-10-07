// roc 2009-06 00784c30  unit: CXTPToolTipContextToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00784c30
//
// 00784c30  b884d88f00           mov eax, 0x8fd884
// 00784c35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00784c30()
{
    return &G;
}
