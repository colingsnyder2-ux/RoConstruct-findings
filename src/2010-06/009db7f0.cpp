// roc 2010-06 009db7f0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db7f0
//
// 009db7f0  b91010c000           mov ecx, 0xc01010
// 009db7f5  e916c4a6ff           jmp 0x447c10
// auto-matched from its assembly shape

struct T_func_009db7f0 { void m(); };
extern T_func_009db7f0 G1_func_009db7f0;
void func_009db7f0()
{
    G1_func_009db7f0.m();
}
