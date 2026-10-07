// roc 2011-06 00a35500  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35500
//
// 00a35500  b978d5cb00           mov ecx, 0xcbd578
// 00a35505  e90670a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a35500 { void m(); };
extern T_func_00a35500 G1_func_00a35500;
void func_00a35500()
{
    G1_func_00a35500.m();
}
