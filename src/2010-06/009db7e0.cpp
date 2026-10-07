// roc 2010-06 009db7e0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db7e0
//
// 009db7e0  b90011c000           mov ecx, 0xc01100
// 009db7e5  e956c7a6ff           jmp 0x447f40
// auto-matched from its assembly shape

struct T_func_009db7e0 { void m(); };
extern T_func_009db7e0 G1_func_009db7e0;
void func_009db7e0()
{
    G1_func_009db7e0.m();
}
