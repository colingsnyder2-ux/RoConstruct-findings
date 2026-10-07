// roc 2011-06 00a158b0  unit: seg_00a10000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a158b0
//
// 00a158b0  6840ffa200           push 0xa2ff40
// 00a158b5  e8a358dfff           call 0x80b15d
// 00a158ba  59                   pop ecx
// 00a158bb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a158b0;
extern void G1_func_00a158b0(void*);
void func_00a158b0()
{
    G1_func_00a158b0(&G2_func_00a158b0);
}
