// roc 2010-06 009d95c0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d95c0
//
// 009d95c0  68d08f9e00           push 0x9e8fd0
// 009d95c5  e899f4dcff           call 0x7a8a63
// 009d95ca  59                   pop ecx
// 009d95cb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009d95c0;
extern void G1_func_009d95c0(void*);
void func_009d95c0()
{
    G1_func_009d95c0(&G2_func_009d95c0);
}
