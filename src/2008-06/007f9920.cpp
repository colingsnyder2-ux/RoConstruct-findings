// roc 2008-06 007f9920  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9920
//
// 007f9920  68b0188000           push 0x8018b0
// 007f9925  e8857eeaff           call 0x6a17af
// 007f992a  59                   pop ecx
// 007f992b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f9920;
extern void G1_func_007f9920(void*);
void func_007f9920()
{
    G1_func_007f9920(&G2_func_007f9920);
}
