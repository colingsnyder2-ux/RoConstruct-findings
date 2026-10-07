// roc 2012-06 004a0260  unit: CScriptEditor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a0260
//
// 004a0260  b8c406b600           mov eax, 0xb606c4
// 004a0265  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a0260()
{
    return &G;
}
