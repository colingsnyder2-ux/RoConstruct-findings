// roc 2010-06 009d95b0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d95b0
//
// 009d95b0  68a08f9e00           push 0x9e8fa0
// 009d95b5  e8a9f4dcff           call 0x7a8a63
// 009d95ba  59                   pop ecx
// 009d95bb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009d95b0;
extern void G1_func_009d95b0(void*);
void func_009d95b0()
{
    G1_func_009d95b0(&G2_func_009d95b0);
}
