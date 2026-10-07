// roc 2009-06 008882b0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008882b0
//
// 008882b0  68a05e8900           push 0x895ea0
// 008882b5  e84118e9ff           call 0x719afb
// 008882ba  59                   pop ecx
// 008882bb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008882b0;
extern void G1_func_008882b0(void*);
void func_008882b0()
{
    G1_func_008882b0(&G2_func_008882b0);
}
