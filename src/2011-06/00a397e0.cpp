// roc 2011-06 00a397e0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a397e0
//
// 00a397e0  b960afcc00           mov ecx, 0xccaf60
// 00a397e5  e9d638a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a397e0 { void m(); };
extern T_func_00a397e0 G1_func_00a397e0;
void func_00a397e0()
{
    G1_func_00a397e0.m();
}
