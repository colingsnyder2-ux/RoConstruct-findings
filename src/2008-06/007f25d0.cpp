// roc 2008-06 007f25d0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f25d0
//
// 007f25d0  6830c67f00           push 0x7fc630
// 007f25d5  e8d5f1eaff           call 0x6a17af
// 007f25da  59                   pop ecx
// 007f25db  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f25d0;
extern void G1_func_007f25d0(void*);
void func_007f25d0()
{
    G1_func_007f25d0(&G2_func_007f25d0);
}
