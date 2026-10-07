// roc 2008-06 0046a8d0  unit: CWebToolbox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a8d0
//
// 0046a8d0  b83cc78100           mov eax, 0x81c73c
// 0046a8d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0046a8d0()
{
    return &G;
}
