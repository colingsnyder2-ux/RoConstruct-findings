// roc 2008-06 007f0f20  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0f20
//
// 007f0f20  68e0b07f00           push 0x7fb0e0
// 007f0f25  e88508ebff           call 0x6a17af
// 007f0f2a  59                   pop ecx
// 007f0f2b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f0f20;
extern void G1_func_007f0f20(void*);
void func_007f0f20()
{
    G1_func_007f0f20(&G2_func_007f0f20);
}
