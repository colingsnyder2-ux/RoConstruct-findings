// roc 2010-06 00814e90  unit: CXTPToolTipContextToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00814e90
//
// 00814e90  b86021a600           mov eax, 0xa62160
// 00814e95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00814e90()
{
    return &G;
}
