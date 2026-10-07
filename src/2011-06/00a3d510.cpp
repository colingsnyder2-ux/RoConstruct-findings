// roc 2011-06 00a3d510  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d510
//
// 00a3d510  b91020cd00           mov ecx, 0xcd2010
// 00a3d515  e9a6fba6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3d510 { void m(); };
extern T_func_00a3d510 G1_func_00a3d510;
void func_00a3d510()
{
    G1_func_00a3d510.m();
}
