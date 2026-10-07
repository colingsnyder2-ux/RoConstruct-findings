// roc 2007-08 007204d0  unit: CXTShadowHook  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007204d0
//
// 007204d0  b858227e00           mov eax, 0x7e2258
// 007204d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007204d0()
{
    return &G;
}
