// roc 2007-08 007786c0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007786c0
//
// 007786c0  b900e38b00           mov ecx, 0x8be300
// 007786c5  e9f6e5c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_007786c0 { void m(); };
extern T_func_007786c0 G1_func_007786c0;
void func_007786c0()
{
    G1_func_007786c0.m();
}
