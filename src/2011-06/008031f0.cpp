// roc 2011-06 008031f0  unit: W4_D3DFORMAT::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008031f0
//
// 008031f0  b8b057c900           mov eax, 0xc957b0
// 008031f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008031f0()
{
    return &G;
}
