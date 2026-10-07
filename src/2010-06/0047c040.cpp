// roc 2010-06 0047c040  unit: CWebToolbox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047c040
//
// 0047c040  b89428a100           mov eax, 0xa12894
// 0047c045  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0047c040()
{
    return &G;
}
