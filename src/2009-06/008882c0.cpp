// roc 2009-06 008882c0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008882c0
//
// 008882c0  68b05e8900           push 0x895eb0
// 008882c5  e83118e9ff           call 0x719afb
// 008882ca  59                   pop ecx
// 008882cb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008882c0;
extern void G1_func_008882c0(void*);
void func_008882c0()
{
    G1_func_008882c0(&G2_func_008882c0);
}
