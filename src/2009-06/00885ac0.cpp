// roc 2009-06 00885ac0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885ac0
//
// 00885ac0  68b04c8900           push 0x894cb0
// 00885ac5  e83140e9ff           call 0x719afb
// 00885aca  59                   pop ecx
// 00885acb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00885ac0;
extern void G1_func_00885ac0(void*);
void func_00885ac0()
{
    G1_func_00885ac0(&G2_func_00885ac0);
}
