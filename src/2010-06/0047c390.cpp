// roc 2010-06 0047c390  unit: CWebToolbox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047c390
//
// 0047c390  b82c2ba100           mov eax, 0xa12b2c
// 0047c395  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0047c390()
{
    return &G;
}
