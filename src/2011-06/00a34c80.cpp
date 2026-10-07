// roc 2011-06 00a34c80  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34c80
//
// 00a34c80  b948b0cb00           mov ecx, 0xcbb048
// 00a34c85  e91698b5ff           jmp 0x58e4a0
// auto-matched from its assembly shape

struct T_func_00a34c80 { void m(); };
extern T_func_00a34c80 G1_func_00a34c80;
void func_00a34c80()
{
    G1_func_00a34c80.m();
}
