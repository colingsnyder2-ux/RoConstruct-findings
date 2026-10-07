// roc 2011-06 008726d0  unit: CXTPToolTipContextToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008726d0
//
// 008726d0  b840caac00           mov eax, 0xacca40
// 008726d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008726d0()
{
    return &G;
}
