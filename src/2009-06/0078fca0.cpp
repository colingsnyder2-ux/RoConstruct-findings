// roc 2009-06 0078fca0  unit: CXTPPropertyGridItemBool  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078fca0
//
// 0078fca0  b830f38f00           mov eax, 0x8ff330
// 0078fca5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0078fca0()
{
    return &G;
}
