// roc 2008-06 00709b30  unit: CXTPToolTipContextToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00709b30
//
// 00709b30  b814c38500           mov eax, 0x85c314
// 00709b35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00709b30()
{
    return &G;
}
