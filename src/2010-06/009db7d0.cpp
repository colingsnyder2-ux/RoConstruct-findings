// roc 2010-06 009db7d0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db7d0
//
// 009db7d0  b9f011c000           mov ecx, 0xc011f0
// 009db7d5  e996caa6ff           jmp 0x448270
// auto-matched from its assembly shape

struct T_func_009db7d0 { void m(); };
extern T_func_009db7d0 G1_func_009db7d0;
void func_009db7d0()
{
    G1_func_009db7d0.m();
}
