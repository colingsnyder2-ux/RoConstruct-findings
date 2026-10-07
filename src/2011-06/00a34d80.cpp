// roc 2011-06 00a34d80  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34d80
//
// 00a34d80  b908b1cb00           mov ecx, 0xcbb108
// 00a34d85  e93683a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a34d80 { void m(); };
extern T_func_00a34d80 G1_func_00a34d80;
void func_00a34d80()
{
    G1_func_00a34d80.m();
}
