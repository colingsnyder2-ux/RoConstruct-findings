// roc 2007-08 00779560  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779560
//
// 00779560  b928138c00           mov ecx, 0x8c1328
// 00779565  e956d7c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00779560 { void m(); };
extern T_func_00779560 G1_func_00779560;
void func_00779560()
{
    G1_func_00779560.m();
}
