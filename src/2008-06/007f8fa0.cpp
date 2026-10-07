// roc 2008-06 007f8fa0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8fa0
//
// 007f8fa0  68e0148000           push 0x8014e0
// 007f8fa5  e80588eaff           call 0x6a17af
// 007f8faa  59                   pop ecx
// 007f8fab  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f8fa0;
extern void G1_func_007f8fa0(void*);
void func_007f8fa0()
{
    G1_func_007f8fa0(&G2_func_007f8fa0);
}
