// roc 2008-06 004638c0  unit: CScriptEditor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004638c0
//
// 004638c0  b808b28100           mov eax, 0x81b208
// 004638c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004638c0()
{
    return &G;
}
