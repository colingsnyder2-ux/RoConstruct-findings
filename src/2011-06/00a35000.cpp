// roc 2011-06 00a35000  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35000
//
// 00a35000  b900bdcb00           mov ecx, 0xcbbd00
// 00a35005  e90675a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a35000 { void m(); };
extern T_func_00a35000 G1_func_00a35000;
void func_00a35000()
{
    G1_func_00a35000.m();
}
