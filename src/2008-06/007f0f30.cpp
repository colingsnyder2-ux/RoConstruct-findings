// roc 2008-06 007f0f30  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0f30
//
// 007f0f30  68f0b07f00           push 0x7fb0f0
// 007f0f35  e87508ebff           call 0x6a17af
// 007f0f3a  59                   pop ecx
// 007f0f3b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f0f30;
extern void G1_func_007f0f30(void*);
void func_007f0f30()
{
    G1_func_007f0f30(&G2_func_007f0f30);
}
