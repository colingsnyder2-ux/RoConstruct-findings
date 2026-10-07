// roc 2007-08 007776b0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007776b0
//
// 007776b0  b950b88b00           mov ecx, 0x8bb850
// 007776b5  e906f6c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_007776b0 { void m(); };
extern T_func_007776b0 G1_func_007776b0;
void func_007776b0()
{
    G1_func_007776b0.m();
}
