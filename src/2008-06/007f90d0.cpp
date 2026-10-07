// roc 2008-06 007f90d0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f90d0
//
// 007f90d0  6810158000           push 0x801510
// 007f90d5  e8d586eaff           call 0x6a17af
// 007f90da  59                   pop ecx
// 007f90db  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f90d0;
extern void G1_func_007f90d0(void*);
void func_007f90d0()
{
    G1_func_007f90d0(&G2_func_007f90d0);
}
