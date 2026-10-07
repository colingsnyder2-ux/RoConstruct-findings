// roc 2009-06 0042c410  unit: CMultiPlayerPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042c410
//
// 0042c410  b860228b00           mov eax, 0x8b2260
// 0042c415  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042c410()
{
    return &G;
}
