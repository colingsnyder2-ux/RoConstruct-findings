// roc 2011-06 00a3f240  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f240
//
// 00a3f240  b9004ccd00           mov ecx, 0xcd4c00
// 00a3f245  e976dea6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3f240 { void m(); };
extern T_func_00a3f240 G1_func_00a3f240;
void func_00a3f240()
{
    G1_func_00a3f240.m();
}
