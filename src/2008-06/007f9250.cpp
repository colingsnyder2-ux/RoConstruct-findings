// roc 2008-06 007f9250  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9250
//
// 007f9250  6820178000           push 0x801720
// 007f9255  e85585eaff           call 0x6a17af
// 007f925a  59                   pop ecx
// 007f925b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f9250;
extern void G1_func_007f9250(void*);
void func_007f9250()
{
    G1_func_007f9250(&G2_func_007f9250);
}
