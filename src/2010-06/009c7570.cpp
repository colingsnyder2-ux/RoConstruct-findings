// roc 2010-06 009c7570  unit: seg_009c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7570
//
// 009c7570  b97c5dc000           mov ecx, 0xc05d7c
// 009c7575  e96640d4ff           jmp 0x70b5e0
// auto-matched from its assembly shape

struct T_func_009c7570 { void m(); };
extern T_func_009c7570 G1_func_009c7570;
void func_009c7570()
{
    G1_func_009c7570.m();
}
