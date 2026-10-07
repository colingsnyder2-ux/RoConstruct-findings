// roc 2011-06 00a3d520  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d520
//
// 00a3d520  b92821cd00           mov ecx, 0xcd2128
// 00a3d525  e996fba6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3d520 { void m(); };
extern T_func_00a3d520 G1_func_00a3d520;
void func_00a3d520()
{
    G1_func_00a3d520.m();
}
