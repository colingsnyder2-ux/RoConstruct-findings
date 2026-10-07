// roc 2008-06 007efd60  unit: seg_007e0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007efd60
//
// 007efd60  68f0af7f00           push 0x7faff0
// 007efd65  e8451aebff           call 0x6a17af
// 007efd6a  59                   pop ecx
// 007efd6b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007efd60;
extern void G1_func_007efd60(void*);
void func_007efd60()
{
    G1_func_007efd60(&G2_func_007efd60);
}
