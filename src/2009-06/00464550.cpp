// roc 2009-06 00464550  unit: CScriptEditor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464550
//
// 00464550  b8c8bb8b00           mov eax, 0x8bbbc8
// 00464555  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00464550()
{
    return &G;
}
