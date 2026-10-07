// roc 2011-06 00a3db70  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3db70
//
// 00a3db70  b99829cd00           mov ecx, 0xcd2998
// 00a3db75  e996e9a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3db70 { void m(); };
extern T_func_00a3db70 G1_func_00a3db70;
void func_00a3db70()
{
    G1_func_00a3db70.m();
}
