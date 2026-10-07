// roc 2011-06 00a3d040  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d040
//
// 00a3d040  b9f015cd00           mov ecx, 0xcd15f0
// 00a3d045  e97600a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3d040 { void m(); };
extern T_func_00a3d040 G1_func_00a3d040;
void func_00a3d040()
{
    G1_func_00a3d040.m();
}
