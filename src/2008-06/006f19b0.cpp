// roc 2008-06 006f19b0  unit: CXTPControls  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f19b0
//
// 006f19b0  b8bc908500           mov eax, 0x8590bc
// 006f19b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f19b0()
{
    return &G;
}
