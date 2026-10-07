// roc 2008-06 007f91b0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f91b0
//
// 007f91b0  6880168000           push 0x801680
// 007f91b5  e8f585eaff           call 0x6a17af
// 007f91ba  59                   pop ecx
// 007f91bb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f91b0;
extern void G1_func_007f91b0(void*);
void func_007f91b0()
{
    G1_func_007f91b0(&G2_func_007f91b0);
}
