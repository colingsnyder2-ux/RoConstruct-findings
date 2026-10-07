// roc 2011-06 00a39560  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39560
//
// 00a39560  b9f0abcc00           mov ecx, 0xccabf0
// 00a39565  e9563ba7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a39560 { void m(); };
extern T_func_00a39560 G1_func_00a39560;
void func_00a39560()
{
    G1_func_00a39560.m();
}
