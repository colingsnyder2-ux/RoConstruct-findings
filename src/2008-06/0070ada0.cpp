// roc 2008-06 0070ada0  unit: CXTPToolTipContextToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070ada0
//
// 0070ada0  b888c48500           mov eax, 0x85c488
// 0070ada5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0070ada0()
{
    return &G;
}
