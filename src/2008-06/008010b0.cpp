// roc 2008-06 008010b0  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008010b0
//
// 008010b0  b9ecd59700           mov ecx, 0x97d5ec
// 008010b5  e9f67fe4ff           jmp 0x6490b0
// auto-matched from its assembly shape

struct T_func_008010b0 { void m(); };
extern T_func_008010b0 G1_func_008010b0;
void func_008010b0()
{
    G1_func_008010b0.m();
}
