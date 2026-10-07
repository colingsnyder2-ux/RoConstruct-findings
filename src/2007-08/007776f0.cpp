// roc 2007-08 007776f0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007776f0
//
// 007776f0  b9f0b48b00           mov ecx, 0x8bb4f0
// 007776f5  e9c6f5c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_007776f0 { void m(); };
extern T_func_007776f0 G1_func_007776f0;
void func_007776f0()
{
    G1_func_007776f0.m();
}
