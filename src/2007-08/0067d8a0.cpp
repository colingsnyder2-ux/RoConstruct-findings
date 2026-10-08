// roc 2007-08 0067d8a0  unit: CXTPControlSelector  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067d8a0
//
// 0067d8a0  b8846b8b00           mov eax, 0x8b6b84
// 0067d8a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0067d8a0()
{
    return &G;
}
