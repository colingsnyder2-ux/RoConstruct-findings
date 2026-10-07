// roc 2011-06 0048d540  unit: CScriptDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048d540
//
// 0048d540  b8e840a700           mov eax, 0xa740e8
// 0048d545  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0048d540()
{
    return &G;
}
