// roc 2007-08 007776d0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007776d0
//
// 007776d0  b910b68b00           mov ecx, 0x8bb610
// 007776d5  e9e6f5c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_007776d0 { void m(); };
extern T_func_007776d0 G1_func_007776d0;
void func_007776d0()
{
    G1_func_007776d0.m();
}
