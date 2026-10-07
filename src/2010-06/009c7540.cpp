// roc 2010-06 009c7540  unit: seg_009c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7540
//
// 009c7540  b97b5dc000           mov ecx, 0xc05d7b
// 009c7545  e99640d4ff           jmp 0x70b5e0
// auto-matched from its assembly shape

struct T_func_009c7540 { void m(); };
extern T_func_009c7540 G1_func_009c7540;
void func_009c7540()
{
    G1_func_009c7540.m();
}
