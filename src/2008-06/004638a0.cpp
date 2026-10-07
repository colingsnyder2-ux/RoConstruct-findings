// roc 2008-06 004638a0  unit: CScriptDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004638a0
//
// 004638a0  b8ecb18100           mov eax, 0x81b1ec
// 004638a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004638a0()
{
    return &G;
}
