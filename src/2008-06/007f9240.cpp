// roc 2008-06 007f9240  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9240
//
// 007f9240  68f0168000           push 0x8016f0
// 007f9245  e86585eaff           call 0x6a17af
// 007f924a  59                   pop ecx
// 007f924b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f9240;
extern void G1_func_007f9240(void*);
void func_007f9240()
{
    G1_func_007f9240(&G2_func_007f9240);
}
