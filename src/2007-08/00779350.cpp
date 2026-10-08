// roc 2007-08 00779350  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779350
//
// 00779350  b9900c8c00           mov ecx, 0x8c0c90
// 00779355  e966d9c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00779350 { void m(); };
extern T_func_00779350 G1_func_00779350;
void func_00779350()
{
    G1_func_00779350.m();
}
