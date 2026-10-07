// roc 2011-06 00a2ece0  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ece0
//
// 00a2ece0  68a0faa300           push 0xa3faa0
// 00a2ece5  e873c4ddff           call 0x80b15d
// 00a2ecea  59                   pop ecx
// 00a2eceb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a2ece0;
extern void G1_func_00a2ece0(void*);
void func_00a2ece0()
{
    G1_func_00a2ece0(&G2_func_00a2ece0);
}
