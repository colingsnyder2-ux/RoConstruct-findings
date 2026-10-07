// roc 2008-06 007f9fd0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9fd0
//
// 007f9fd0  68f0198000           push 0x8019f0
// 007f9fd5  e8d577eaff           call 0x6a17af
// 007f9fda  59                   pop ecx
// 007f9fdb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f9fd0;
extern void G1_func_007f9fd0(void*);
void func_007f9fd0()
{
    G1_func_007f9fd0(&G2_func_007f9fd0);
}
