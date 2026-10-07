// roc 2009-06 00892ac0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892ac0
//
// 00892ac0  68b0d38900           push 0x89d3b0
// 00892ac5  e83170e8ff           call 0x719afb
// 00892aca  59                   pop ecx
// 00892acb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00892ac0;
extern void G1_func_00892ac0(void*);
void func_00892ac0()
{
    G1_func_00892ac0(&G2_func_00892ac0);
}
