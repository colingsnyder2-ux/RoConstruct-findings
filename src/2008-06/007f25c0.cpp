// roc 2008-06 007f25c0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f25c0
//
// 007f25c0  6850c57f00           push 0x7fc550
// 007f25c5  e8e5f1eaff           call 0x6a17af
// 007f25ca  59                   pop ecx
// 007f25cb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f25c0;
extern void G1_func_007f25c0(void*);
void func_007f25c0()
{
    G1_func_007f25c0(&G2_func_007f25c0);
}
