// roc 2009-06 008888f0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008888f0
//
// 008888f0  6840648900           push 0x896440
// 008888f5  e80112e9ff           call 0x719afb
// 008888fa  59                   pop ecx
// 008888fb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008888f0;
extern void G1_func_008888f0(void*);
void func_008888f0()
{
    G1_func_008888f0(&G2_func_008888f0);
}
