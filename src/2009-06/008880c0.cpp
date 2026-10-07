// roc 2009-06 008880c0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008880c0
//
// 008880c0  68105d8900           push 0x895d10
// 008880c5  e8311ae9ff           call 0x719afb
// 008880ca  59                   pop ecx
// 008880cb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008880c0;
extern void G1_func_008880c0(void*);
void func_008880c0()
{
    G1_func_008880c0(&G2_func_008880c0);
}
