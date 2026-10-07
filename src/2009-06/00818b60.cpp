// roc 2009-06 00818b60  unit: CXTShadowHook  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00818b60
//
// 00818b60  b878f59000           mov eax, 0x90f578
// 00818b65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00818b60()
{
    return &G;
}
