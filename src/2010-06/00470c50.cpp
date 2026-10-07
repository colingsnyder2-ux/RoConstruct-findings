// roc 2010-06 00470c50  unit: CScriptEditor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00470c50
//
// 00470c50  b8e80da100           mov eax, 0xa10de8
// 00470c55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00470c50()
{
    return &G;
}
