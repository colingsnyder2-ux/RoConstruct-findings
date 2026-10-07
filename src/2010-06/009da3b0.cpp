// roc 2010-06 009da3b0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da3b0
//
// 009da3b0  68e0929e00           push 0x9e92e0
// 009da3b5  e8a9e6dcff           call 0x7a8a63
// 009da3ba  59                   pop ecx
// 009da3bb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009da3b0;
extern void G1_func_009da3b0(void*);
void func_009da3b0()
{
    G1_func_009da3b0(&G2_func_009da3b0);
}
