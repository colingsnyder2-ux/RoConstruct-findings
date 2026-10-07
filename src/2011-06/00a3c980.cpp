// roc 2011-06 00a3c980  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c980
//
// 00a3c980  b9980dcd00           mov ecx, 0xcd0d98
// 00a3c985  e986fba6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c980 { void m(); };
extern T_func_00a3c980 G1_func_00a3c980;
void func_00a3c980()
{
    G1_func_00a3c980.m();
}
