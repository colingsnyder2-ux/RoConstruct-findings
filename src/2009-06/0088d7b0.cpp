// roc 2009-06 0088d7b0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088d7b0
//
// 0088d7b0  68f0a08900           push 0x89a0f0
// 0088d7b5  e841c3e8ff           call 0x719afb
// 0088d7ba  59                   pop ecx
// 0088d7bb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_0088d7b0;
extern void G1_func_0088d7b0(void*);
void func_0088d7b0()
{
    G1_func_0088d7b0(&G2_func_0088d7b0);
}
