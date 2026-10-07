// roc 2008-06 007f9270  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9270
//
// 007f9270  6890178000           push 0x801790
// 007f9275  e83585eaff           call 0x6a17af
// 007f927a  59                   pop ecx
// 007f927b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f9270;
extern void G1_func_007f9270(void*);
void func_007f9270()
{
    G1_func_007f9270(&G2_func_007f9270);
}
