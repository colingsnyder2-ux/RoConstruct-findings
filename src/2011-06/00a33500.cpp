// roc 2011-06 00a33500  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33500
//
// 00a33500  b9007acb00           mov ecx, 0xcb7a00
// 00a33505  e90690a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a33500 { void m(); };
extern T_func_00a33500 G1_func_00a33500;
void func_00a33500()
{
    G1_func_00a33500.m();
}
