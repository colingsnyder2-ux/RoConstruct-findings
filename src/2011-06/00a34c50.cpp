// roc 2011-06 00a34c50  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34c50
//
// 00a34c50  b9a8a8cb00           mov ecx, 0xcba8a8
// 00a34c55  e9e68e9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a34c50 { void m(); };
extern T_func_00a34c50 G1_func_00a34c50;
void func_00a34c50()
{
    G1_func_00a34c50.m();
}
