// roc 2011-06 00a376a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a376a0
//
// 00a376a0  b9a83ccc00           mov ecx, 0xcc3ca8
// 00a376a5  e996649dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a376a0 { void m(); };
extern T_func_00a376a0 G1_func_00a376a0;
void func_00a376a0()
{
    G1_func_00a376a0.m();
}
