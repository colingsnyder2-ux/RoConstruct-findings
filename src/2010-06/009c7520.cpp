// roc 2010-06 009c7520  unit: seg_009c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7520
//
// 009c7520  b9765dc000           mov ecx, 0xc05d76
// 009c7525  e9b640d4ff           jmp 0x70b5e0
// auto-matched from its assembly shape

struct T_func_009c7520 { void m(); };
extern T_func_009c7520 G1_func_009c7520;
void func_009c7520()
{
    G1_func_009c7520.m();
}
