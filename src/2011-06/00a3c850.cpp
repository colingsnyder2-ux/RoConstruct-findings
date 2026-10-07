// roc 2011-06 00a3c850  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c850
//
// 00a3c850  b9d808cd00           mov ecx, 0xcd08d8
// 00a3c855  e96608a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3c850 { void m(); };
extern T_func_00a3c850 G1_func_00a3c850;
void func_00a3c850()
{
    G1_func_00a3c850.m();
}
