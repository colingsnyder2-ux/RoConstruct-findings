// roc 2007-08 007770a0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007770a0
//
// 007770a0  68e0cd7700           push 0x77cde0
// 007770a5  e8799cebff           call 0x630d23
// 007770aa  59                   pop ecx
// 007770ab  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007770a0;
extern void G1_func_007770a0(void*);
void func_007770a0()
{
    G1_func_007770a0(&G2_func_007770a0);
}
