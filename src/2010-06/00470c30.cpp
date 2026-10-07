// roc 2010-06 00470c30  unit: CScriptDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00470c30
//
// 00470c30  b8cc0da100           mov eax, 0xa10dcc
// 00470c35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00470c30()
{
    return &G;
}
