// roc 2010-06 00472d20  unit: CScriptEditor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00472d20
//
// 00472d20  b8cc11a100           mov eax, 0xa111cc
// 00472d25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00472d20()
{
    return &G;
}
