// roc 2009-06 008888b0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008888b0
//
// 008888b0  6800648900           push 0x896400
// 008888b5  e84112e9ff           call 0x719afb
// 008888ba  59                   pop ecx
// 008888bb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008888b0;
extern void G1_func_008888b0(void*);
void func_008888b0()
{
    G1_func_008888b0(&G2_func_008888b0);
}
