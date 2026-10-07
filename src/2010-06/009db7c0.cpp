// roc 2010-06 009db7c0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db7c0
//
// 009db7c0  b9e012c000           mov ecx, 0xc012e0
// 009db7c5  e9d6cda6ff           jmp 0x4485a0
// auto-matched from its assembly shape

struct T_func_009db7c0 { void m(); };
extern T_func_009db7c0 G1_func_009db7c0;
void func_009db7c0()
{
    G1_func_009db7c0.m();
}
