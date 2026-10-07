// roc 2011-06 00a3ac90  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ac90
//
// 00a3ac90  b9c8d8cc00           mov ecx, 0xccd8c8
// 00a3ac95  e97618a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3ac90 { void m(); };
extern T_func_00a3ac90 G1_func_00a3ac90;
void func_00a3ac90()
{
    G1_func_00a3ac90.m();
}
