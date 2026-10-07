// roc 2011-06 00a2ede0  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ede0
//
// 00a2ede0  6810fba300           push 0xa3fb10
// 00a2ede5  e873c3ddff           call 0x80b15d
// 00a2edea  59                   pop ecx
// 00a2edeb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a2ede0;
extern void G1_func_00a2ede0(void*);
void func_00a2ede0()
{
    G1_func_00a2ede0(&G2_func_00a2ede0);
}
