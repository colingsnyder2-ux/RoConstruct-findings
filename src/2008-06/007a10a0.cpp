// roc 2008-06 007a10a0  unit: CXTShadowHook  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a10a0
//
// 007a10a0  b838f08600           mov eax, 0x86f038
// 007a10a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007a10a0()
{
    return &G;
}
