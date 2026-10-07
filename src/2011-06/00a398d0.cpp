// roc 2011-06 00a398d0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a398d0
//
// 00a398d0  b968accc00           mov ecx, 0xccac68
// 00a398d5  e9e637a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a398d0 { void m(); };
extern T_func_00a398d0 G1_func_00a398d0;
void func_00a398d0()
{
    G1_func_00a398d0.m();
}
