// roc 2009-06 008888c0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008888c0
//
// 008888c0  6810648900           push 0x896410
// 008888c5  e83112e9ff           call 0x719afb
// 008888ca  59                   pop ecx
// 008888cb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008888c0;
extern void G1_func_008888c0(void*);
void func_008888c0()
{
    G1_func_008888c0(&G2_func_008888c0);
}
