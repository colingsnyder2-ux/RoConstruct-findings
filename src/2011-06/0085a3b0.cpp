// roc 2011-06 0085a3b0  unit: CXTPControlRadioButton  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085a3b0
//
// 0085a3b0  b8d071c900           mov eax, 0xc971d0
// 0085a3b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0085a3b0()
{
    return &G;
}
