// roc 2012-06 004a0240  unit: CScriptDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a0240
//
// 004a0240  b8a806b600           mov eax, 0xb606a8
// 004a0245  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a0240()
{
    return &G;
}
