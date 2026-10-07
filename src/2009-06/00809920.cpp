// roc 2009-06 00809920  unit: CXTShadowHook  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00809920
//
// 00809920  b820be9000           mov eax, 0x90be20
// 00809925  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00809920()
{
    return &G;
}
