// roc 2009-06 008931a0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008931a0
//
// 008931a0  6870d58900           push 0x89d570
// 008931a5  e85169e8ff           call 0x719afb
// 008931aa  59                   pop ecx
// 008931ab  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008931a0;
extern void G1_func_008931a0(void*);
void func_008931a0()
{
    G1_func_008931a0(&G2_func_008931a0);
}
