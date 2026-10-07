// roc 2007-08 007786a0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007786a0
//
// 007786a0  b920e48b00           mov ecx, 0x8be420
// 007786a5  e916e6c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_007786a0 { void m(); };
extern T_func_007786a0 G1_func_007786a0;
void func_007786a0()
{
    G1_func_007786a0.m();
}
