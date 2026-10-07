// roc 2011-06 0048d560  unit: CScriptEditor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048d560
//
// 0048d560  b80441a700           mov eax, 0xa74104
// 0048d565  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0048d560()
{
    return &G;
}
