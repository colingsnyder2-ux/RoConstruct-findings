// roc 2009-06 008888a0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008888a0
//
// 008888a0  68f0638900           push 0x8963f0
// 008888a5  e85112e9ff           call 0x719afb
// 008888aa  59                   pop ecx
// 008888ab  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008888a0;
extern void G1_func_008888a0(void*);
void func_008888a0()
{
    G1_func_008888a0(&G2_func_008888a0);
}
