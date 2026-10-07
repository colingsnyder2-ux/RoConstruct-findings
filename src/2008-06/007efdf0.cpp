// roc 2008-06 007efdf0  unit: seg_007e0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007efdf0
//
// 007efdf0  68a0b07f00           push 0x7fb0a0
// 007efdf5  e8b519ebff           call 0x6a17af
// 007efdfa  59                   pop ecx
// 007efdfb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007efdf0;
extern void G1_func_007efdf0(void*);
void func_007efdf0()
{
    G1_func_007efdf0(&G2_func_007efdf0);
}
