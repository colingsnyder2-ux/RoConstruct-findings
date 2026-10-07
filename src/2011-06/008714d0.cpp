// roc 2011-06 008714d0  unit: CXTPToolTipContextToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008714d0
//
// 008714d0  b8ccc8ac00           mov eax, 0xacc8cc
// 008714d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008714d0()
{
    return &G;
}
