// roc 2010-06 009db810  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db810
//
// 009db810  b9300ec000           mov ecx, 0xc00e30
// 009db815  e996bda6ff           jmp 0x4475b0
// auto-matched from its assembly shape

struct T_func_009db810 { void m(); };
extern T_func_009db810 G1_func_009db810;
void func_009db810()
{
    G1_func_009db810.m();
}
