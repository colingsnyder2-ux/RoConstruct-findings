// roc 2011-06 0085a240  unit: CXTPControlSelector  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085a240
//
// 0085a240  b86071c900           mov eax, 0xc97160
// 0085a245  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0085a240()
{
    return &G;
}
