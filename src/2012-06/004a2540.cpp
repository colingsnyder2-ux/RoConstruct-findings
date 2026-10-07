// roc 2012-06 004a2540  unit: CScriptEditor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a2540
//
// 004a2540  b8300db600           mov eax, 0xb60d30
// 004a2545  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a2540()
{
    return &G;
}
