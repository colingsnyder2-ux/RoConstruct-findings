// roc 2008-06 007f99d0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f99d0
//
// 007f99d0  68f0188000           push 0x8018f0
// 007f99d5  e8d57deaff           call 0x6a17af
// 007f99da  59                   pop ecx
// 007f99db  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f99d0;
extern void G1_func_007f99d0(void*);
void func_007f99d0()
{
    G1_func_007f99d0(&G2_func_007f99d0);
}
