// roc 2011-06 00a3a640  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a640
//
// 00a3a640  b9c8cbcc00           mov ecx, 0xcccbc8
// 00a3a645  e90660c4ff           jmp 0x680650
// auto-matched from its assembly shape

struct T_func_00a3a640 { void m(); };
extern T_func_00a3a640 G1_func_00a3a640;
void func_00a3a640()
{
    G1_func_00a3a640.m();
}
