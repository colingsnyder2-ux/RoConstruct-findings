// roc 2010-06 009c75a0  unit: seg_009c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c75a0
//
// 009c75a0  b9775dc000           mov ecx, 0xc05d77
// 009c75a5  e93640d4ff           jmp 0x70b5e0
// auto-matched from its assembly shape

struct T_func_009c75a0 { void m(); };
extern T_func_009c75a0 G1_func_009c75a0;
void func_009c75a0()
{
    G1_func_009c75a0.m();
}
