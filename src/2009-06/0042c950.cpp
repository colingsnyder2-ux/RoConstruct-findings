// roc 2009-06 0042c950  unit: CNullDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042c950
//
// 0042c950  b8b8298b00           mov eax, 0x8b29b8
// 0042c955  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042c950()
{
    return &G;
}
