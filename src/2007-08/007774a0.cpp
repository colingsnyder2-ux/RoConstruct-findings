// roc 2007-08 007774a0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007774a0
//
// 007774a0  b920b28b00           mov ecx, 0x8bb220
// 007774a5  e916f8c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_007774a0 { void m(); };
extern T_func_007774a0 G1_func_007774a0;
void func_007774a0()
{
    G1_func_007774a0.m();
}
