// roc 2011-06 00a3fa90  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fa90
//
// 00a3fa90  b9907dd100           mov ecx, 0xd17d90
// 00a3fa95  e9568adcff           jmp 0x8084f0
// auto-matched from its assembly shape

struct T_func_00a3fa90 { void m(); };
extern T_func_00a3fa90 G1_func_00a3fa90;
void func_00a3fa90()
{
    G1_func_00a3fa90.m();
}
