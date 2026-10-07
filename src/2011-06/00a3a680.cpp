// roc 2011-06 00a3a680  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a680
//
// 00a3a680  b910cdcc00           mov ecx, 0xcccd10
// 00a3a685  e9c65fc4ff           jmp 0x680650
// auto-matched from its assembly shape

struct T_func_00a3a680 { void m(); };
extern T_func_00a3a680 G1_func_00a3a680;
void func_00a3a680()
{
    G1_func_00a3a680.m();
}
