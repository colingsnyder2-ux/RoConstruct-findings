// roc 2010-06 00997910  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00997910
//
// 00997910  b9588ac100           mov ecx, 0xc18a58
// 00997915  e9a6b8b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00997910 { void m(); };
extern T_func_00997910 G1_func_00997910;
void func_00997910()
{
    G1_func_00997910.m();
}
