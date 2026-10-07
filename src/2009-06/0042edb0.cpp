// roc 2009-06 0042edb0  unit: CMemberTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042edb0
//
// 0042edb0  b814348b00           mov eax, 0x8b3414
// 0042edb5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042edb0()
{
    return &G;
}
