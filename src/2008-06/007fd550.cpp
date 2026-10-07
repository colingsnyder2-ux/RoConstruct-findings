// roc 2008-06 007fd550  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd550
//
// 007fd550  b9c8509700           mov ecx, 0x9750c8
// 007fd555  e9865fcaff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fd550 { void m(); };
extern T_func_007fd550 G1_func_007fd550;
void func_007fd550()
{
    G1_func_007fd550.m();
}
