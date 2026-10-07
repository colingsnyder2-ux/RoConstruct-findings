// roc 2010-06 00813c30  unit: CXTPToolTipContextToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00813c30
//
// 00813c30  b8ec1fa600           mov eax, 0xa61fec
// 00813c35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00813c30()
{
    return &G;
}
