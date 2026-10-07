// roc 2009-06 0042c590  unit: CMultiPlayerPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042c590
//
// 0042c590  b8c8238b00           mov eax, 0x8b23c8
// 0042c595  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042c590()
{
    return &G;
}
