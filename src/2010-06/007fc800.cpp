// roc 2010-06 007fc800  unit: CXTPControlOleItems  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fc800
//
// 007fc800  b8987abe00           mov eax, 0xbe7a98
// 007fc805  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007fc800()
{
    return &G;
}
