// roc 2011-06 0081ebd0  unit: CXTPCommandBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081ebd0
//
// 0081ebd0  b8482dac00           mov eax, 0xac2d48
// 0081ebd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0081ebd0()
{
    return &G;
}
