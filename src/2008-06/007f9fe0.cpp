// roc 2008-06 007f9fe0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9fe0
//
// 007f9fe0  68301a8000           push 0x801a30
// 007f9fe5  e8c577eaff           call 0x6a17af
// 007f9fea  59                   pop ecx
// 007f9feb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f9fe0;
extern void G1_func_007f9fe0(void*);
void func_007f9fe0()
{
    G1_func_007f9fe0(&G2_func_007f9fe0);
}
