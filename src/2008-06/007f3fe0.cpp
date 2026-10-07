// roc 2008-06 007f3fe0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3fe0
//
// 007f3fe0  6870d87f00           push 0x7fd870
// 007f3fe5  e8c5d7eaff           call 0x6a17af
// 007f3fea  59                   pop ecx
// 007f3feb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f3fe0;
extern void G1_func_007f3fe0(void*);
void func_007f3fe0()
{
    G1_func_007f3fe0(&G2_func_007f3fe0);
}
