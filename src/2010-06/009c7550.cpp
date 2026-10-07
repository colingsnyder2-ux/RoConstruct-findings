// roc 2010-06 009c7550  unit: seg_009c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7550
//
// 009c7550  b9785dc000           mov ecx, 0xc05d78
// 009c7555  e98640d4ff           jmp 0x70b5e0
// auto-matched from its assembly shape

struct T_func_009c7550 { void m(); };
extern T_func_009c7550 G1_func_009c7550;
void func_009c7550()
{
    G1_func_009c7550.m();
}
