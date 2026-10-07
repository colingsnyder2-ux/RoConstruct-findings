// roc 2011-06 00a32ec0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32ec0
//
// 00a32ec0  b90067cb00           mov ecx, 0xcb6700
// 00a32ec5  e906baa9ff           jmp 0x4ce8d0
// auto-matched from its assembly shape

struct T_func_00a32ec0 { void m(); };
extern T_func_00a32ec0 G1_func_00a32ec0;
void func_00a32ec0()
{
    G1_func_00a32ec0.m();
}
