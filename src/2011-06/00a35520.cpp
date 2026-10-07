// roc 2011-06 00a35520  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35520
//
// 00a35520  b918d8cb00           mov ecx, 0xcbd818
// 00a35525  e9967ba7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a35520 { void m(); };
extern T_func_00a35520 G1_func_00a35520;
void func_00a35520()
{
    G1_func_00a35520.m();
}
