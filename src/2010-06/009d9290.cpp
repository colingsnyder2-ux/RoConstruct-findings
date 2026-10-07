// roc 2010-06 009d9290  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9290
//
// 009d9290  b92634c200           mov ecx, 0xc23426
// 009d9295  e94623d3ff           jmp 0x70b5e0
// auto-matched from its assembly shape

struct T_func_009d9290 { void m(); };
extern T_func_009d9290 G1_func_009d9290;
void func_009d9290()
{
    G1_func_009d9290.m();
}
