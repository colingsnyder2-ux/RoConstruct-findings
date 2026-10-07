// roc 2011-06 00a3c240  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c240
//
// 00a3c240  b9f0facc00           mov ecx, 0xccfaf0
// 00a3c245  e9c602a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c240 { void m(); };
extern T_func_00a3c240 G1_func_00a3c240;
void func_00a3c240()
{
    G1_func_00a3c240.m();
}
